#include <iostream>
#include <string>
using namespace std;
int main() {
	int number;
	cin >> number;
	if (number >= 1000) {
		cout << "Number must be less than 1000" << endl;
		system("pause");
		return 0;
	}
	if (number == 0) {
		cout << "Number must be up than 0" << endl;
		system("pause");
		return 0;
	}
	int first, second, third;
	first = number / 100;
	second = number / 10 % 10;
	third = number % 10;
	cout << first << "" << " " << second << " " << third << endl;
	int secondpartints[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	string secondpartstrings[10] = { "erti", "ori", "sami", "otxi", "xuti", "eqvsi", "shvidi", "rva", "cxra", "ati" };
	string secondpartstrings1[10] = { "tert", "tor", "ca", "totx", "txut", "teqvs", "chvid", "tvra", "cxra", " " };
	string firstpartstrings[9] = { "", "ocda", "ocda", "ormocda", "ormocda", "samocda", "samocda", "otxmocda", "otxmocda"};
	string firstpartstrings1[9] = { "", "oci", "", "ormoci", "", "samoci", "", "otxmoci", "" };
	string firstpartstrings2[9] = { "as", "oras", "samas", "otxas", "xutas", "eqvsas", "shvidas", "rvaas", "cxraas" };
	for (int i = 0; i < 10; i++) {
		if (first == 0 && second == 1 && secondpartints[i] == third) {
			cout << secondpartstrings1[i] + "meti" << endl;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (first == 0 && secondpartints[i] == second && (second == 3 || second == 5 || second == 7 || second == 9))  {
			for (int j = 0; j < 10; j++) {
				if (secondpartints[j] == third)
					cout << firstpartstrings[i] << secondpartstrings1[j] + "meti" << endl;
			}
		}
		else if (first == 0 && secondpartints[i] == second && second !=1) {
			for (int j = 0; j < 10; j++) {
				if (secondpartints[j] == third)
					cout << firstpartstrings[i] << secondpartstrings[j] << endl;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (first == 0 && second == 0 && secondpartints[i] == third) cout << secondpartstrings[i] << endl;
		if (first == 0 && secondpartints[i] == second && third == 0) {
			if (second == 3 || second == 5 || second == 7 || second == 9)
			cout << firstpartstrings[i] + "ati" << endl;
			else cout << firstpartstrings1[i] << endl;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			for (int j = 0; j < 10; j++) 
				if (first == secondpartints[i] && second == secondpartints[k] && third == secondpartints[j]) {
					if (second == 3 || second == 5 || second == 7 || second == 9) cout << firstpartstrings2[i] << firstpartstrings[k] << secondpartstrings1[j] + "meti" << endl;
					else cout << firstpartstrings2[i] << firstpartstrings[k] << secondpartstrings[j] << endl;
				}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (first == secondpartints[i] && second == 0 && third == secondpartints[j]) {
				cout << firstpartstrings2[i] << " " << secondpartstrings[j] << endl;
			}
		}
	}
	system("pause");
	return 0;
}