//Play Again
#include <iostream>
using namespace std;

int main(){
	char again = 'y';

	while (again == 'y') {
		cout << "\n**Played an amazing game!**" << endl;
		cout << "Do you want to play again? (y/n): ";
		cin >> again;
	}

	cout << "\nOkay, Bye..." << endl;

	return 0;
}