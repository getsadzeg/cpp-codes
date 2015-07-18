#include <iostream>
#include <string>
#include <time.h>
#include <sstream>
#include <cstdlib>
#include <typeinfo>
using namespace std;
int main() {
	srand(time(0));
	int random = rand() % 1000;
	int trycounter = 0;
	string usernumber;
	Main:
	while (0 == 0) {
		cout << "Please write a number." << endl;
		cin >> usernumber;
		if (usernumber == "gnebdebi") {
			cout << "Quitting Application.." << endl;
			cout << "You've tried for " << trycounter << " times" << endl;
			break;
		}
		else {
			atoi(usernumber.c_str());
			if (atoi(usernumber.c_str()) >= 1000) {
			trycounter++;
			cout << "The randomed number is under 1000. Try again." << endl;
			goto Main;
			}
			if (atoi(usernumber.c_str()) / 1 == 0) {
				cout << "It is available only numbers or 'gnebdebi'." << endl;
				break;
			}
			while (atoi(usernumber.c_str()) == random) {
				trycounter++;
				cout << "You are winner! You guessed the number in a " << trycounter << " try." << endl;
				break;
			}
			if (atoi(usernumber.c_str()) == random) break;
			while (atoi(usernumber.c_str()) > random) {
				trycounter++;
				cout << "Random number is less than inputted." << endl;
				goto Main;
			}
			while (atoi(usernumber.c_str()) < random) {
				trycounter++;
				cout << "Random number is more than inputted." << endl;
				goto Main;
			}
		}
	}
	system("pause");
	return 0;
}
