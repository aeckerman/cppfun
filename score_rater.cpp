//Score Rater
#include <iostream>;
using namespace std;

int main() {
	int score;

	cout << "Enter Your Score: ";
	cin >> score;

	if (score >= 1000) {
		cout << "Impressive..." << endl;
	} else if (score >= 500) {
		cout << "Nice..." << endl;
	} else if (score >= 250) {
		cout << "Decent..." << endl;
	} else {
		cout << "Eeshh..." << endl;
	}

	return 0;
}
