//Counter
#include <iostream>
using namespace std;

int main() {
	cout << "\nCounting forward:" << endl;
	for (int i = 0; i < 10; ++i) {
		cout << i << " ";
	}

	cout << "\nCounting backward:" << endl;
	for (int i = 9; i >= 0; --i) {
		cout << i << " ";
	}

	cout << "\nCounting by fives:" << endl;
	for (int i = 0; i <= 50; i+=5) {
		cout << i << " ";
	}

	cout << "\nCounting with null statements:" << endl;
	int count = 0;
	for ( ; count < 10; ) {
		cout << count << " ";
		++count;
	}

	cout << "\nCounting counting with nested for loops:" << endl;
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			cout << i << "||" << j << " ";
		}

		cout << endl;
	}

	return 0;
}