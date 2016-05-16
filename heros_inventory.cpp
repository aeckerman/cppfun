//Hero's Inventory
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int num_items = 0;
	inventory[num_items++] = "sword";
	inventory[num_items++] = "armor";
	inventory[num_items++] = "shield";

	cout << "Your items:" << endl;
	for (int i = 0; i < num_items; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe." << endl;
	inventory[0] = "battle axe";
	cout << "\nYour items:" << endl;
	for (int i = 0; i < num_items; ++i) {
		cout << inventory[i] << endl;
	}

	cout << "\nThe \"" << inventory[0] << "\" costs " << inventory[0].size() << " ghast tears." << endl;

	cout << "\nYou found a healing potion under a bush!" << endl;
	if (num_items < MAX_ITEMS) {
		inventory[num_items++] = "healing potion";
	}
	else {
		cout << "\nYou have too many items and cant carry another." << endl;
	}

	cout << "\nYour items:" << endl;
	for (int i = 0; i < num_items; ++i) {
		cout << inventory[i] << endl;
	}

	return 0;
}