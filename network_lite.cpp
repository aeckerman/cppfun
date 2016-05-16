//Network Lite
#include <iostream>;
#include <string>;
using namespace std;

int main() {
	string username;
	string password;
	bool success;

	cout << "\tNetwork Lite\n" << endl;

	do {
		cout << "Username: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;

		if (username == "Andy" && password == "blu") {
			cout << "\nWelcome, " << username << "!" << endl;
			success = true;
		}
		else if (username == "Sam" && password == "boom") {
			cout << "\nWelcome, " << username << "!" << endl;
			success = true;
		}
		else if (username == "guest" && password == "guest") {
			cout << "\nWelcome, guest!" << endl;
			success = true;
		}
		else {
			cout << "\nYour login failed!" << endl;
			success = false;
		}
	} while (!success);

	return 0;
}