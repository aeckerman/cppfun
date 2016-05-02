//Menu
#include <iostream>;
using namespace std;

int main(){
	cout << "Choose your Difficulty!\n" << endl;

	cout << "1 - Easy" << endl;
	cout << "2 - Normal" << endl;
	cout << "3 - Hard\n" << endl;

	int choice;
	cout << "You Choose: ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "Easy it is..." << endl;
			break;
		case 2:
			cout << "Normal it is..." << endl;
			break;
		case 3:
			cout << "Hard it is..." << endl;
			break;
		default:
			cout << "Im afraid that was not a choice." << endl;
	}
	
	return 0;
}
