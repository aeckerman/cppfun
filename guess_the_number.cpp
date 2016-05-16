//Number Guess
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int secret_num = rand() % 100 + 1;
	int tries = 0;
	int guess;

	cout << "\tGuess My Number!\n" << endl;

	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secret_num) {
			cout << "Too high!\n" << endl;
		}
		else if (guess < secret_num) {
			cout << "Too low!\n" << endl;
		}
		else {
			cout << "\nThats my number! You got it in " << tries << " guesses!" << endl;
		}
	} while (guess != secret_num);

	return 0;
}