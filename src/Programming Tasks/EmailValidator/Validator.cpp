#include <iostream>
#include <string>
#include <typeinfo>
#include <regex>
#include <cctype>
#include <ctype.h>
using namespace std;
string mail;
int counter = 0;
int valid4checker = 0;
void input() {
	cin >> mail;
}
void valid1() {
	int a = 0;
	a = mail.find('@');
	if (a > 1) counter += 1;
	cout << counter << endl;
}
void valid2() {
	int a = 0;
	a = mail.find('@');
	int c = 0;
	c = mail.find('.');
	if ((a - c) >= 3 || (c - a) >=3 ) counter += 1;
	cout << counter << endl;
}
void valid3() {
	int d = 0;
	d = mail.size();
	int c = 0;
	c = mail.find('.');
	if ((d - c) >= 2) counter += 1;
	cout << counter << endl;
}
void valid4() {


        regex myRegex("[^a-zA-Z_.@-]+");
	if (regex_search(mail, myRegex)) {
		bool regex = 0;
	}
	else counter += 1;
	cout << counter << endl;
}
void regexvalid4() {
	for (int i = 0; i < mail.length() - 1; i++) {
	if (mail[i] >= 'A' && mail[i] <= 'Z' || mail[i] >= 'a' && mail[i] <= 'z' || mail[i] >= '0' && mail[i] <= '9' || mail[i] == '.' || mail[i] == '-' || mail[i] == '@' || mail[i] == '_')
	valid4checker++;
	else valid4checker--;
	}
	if (valid4checker == mail.length() - 1) {
}
void checking() {
	if (counter == 4) cout << "Email Validated" << endl;
	else cout << "An error occured. Email isn't Validated." << endl;
}
int main() {
	input();
	valid1();
	valid2();
	valid3();
	valid4();
	checking();
	system("pause");
	return 0;
}
