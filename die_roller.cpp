//Die Roller
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int ran_num = rand();

	int die = (ran_num % 6) + 1;
	cout << "You rolled a " << die << "." << endl;
}