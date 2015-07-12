//numbers only 1-100
//Georgian version
#include <iostream>
#include <string>
using namespace std;
int main() {
	int number;
	cin >> number;
	if (number >= 100) {
		cout << "Number must be less than 100" << endl;
		system("pause");
		return 0;
	}
	int first, second;
	//int third;
	first = number / 10;
	second = number % 10;
	cout << first << " " << second << " " <<  endl;
	int secondpartints[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	string secondpartstrings[10] = { "erti", "ori", "sami", "otxi", "xuti", "eqvsi", " shvidi", "rva", "cxra", "ati" };

	string secondpartstrings1[10] = { "tertmeti", "tormeti", "cameti", "totxmeti", "txutmeti", "teqvsmeti", "chvidmeti", "tvrameti", "cxrameti", " " };
	string firstpartstrings[9] = { "", "ocda", "ocda", "ormocda", "ormocda", "samocda", "samocda", "otxmocda", "otxmocda" };
	string firstpartstrings1[9] = { "", "oci", "", "ormoci", "", "samoci", "", "otxmoci",""};
	for (int i = 0; i < 10; i++) {
		if (first == 0 && secondpartints[i] == second) cout << secondpartstrings[i] << endl;
		if (second == 0 && secondpartints[i] == first && (first == 2 || first == 4 || first == 6 || first == 8)) cout << firstpartstrings1[i] << endl;
		else if (second == 0 && secondpartints[i] == first) cout << firstpartstrings[i] << secondpartstrings[9] << endl;
	}
	for (int i = 0; i < 10; i++) {
		if (first == 1 && secondpartints[i] == second) {
			cout << secondpartstrings1[i] << endl;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (secondpartints[i] == first && first != 1 && second !=0)
			cout << firstpartstrings[i];
	}
	for (int i = 0; i < 10; i++) {
		if (secondpartints[i] == second && first!=0 && first != 1 && first != 2 && first != 4 && first != 6 && first != 8) {
			cout << secondpartstrings1[i] << endl;
		}
		else if (secondpartints[i] == second && (first == 2 || first == 4 || first == 6 || first == 8))
			cout << secondpartstrings[i] << endl;
	}
	system("pause");
	return 0;
}