#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string converting_string(int i) {
	stringstream s;
	s << i;
	return s.str();
}
class Person {
public:
	string name;
	string surname;
	int age;
	string profession;
	string sex;
	void print();
	Person(int = 12, string = "guri", string = "getsadze", string = "programmer", string = "male");
	~Person();
};
void Person::print() {
	cout << name << endl;
	cout << surname << endl;
	cout << age << endl;
	cout << profession << endl;
	cout << sex << endl;
}
Person::Person(int a, string s, string b, string c, string k) {
	name = s;
	surname = b;
	age = a;
	profession = c;
	sex = k;
	cout << "Object Constructed." << endl;
}
Person::~Person() {
	cout << "Object Desctructed." << endl;
}
int main() {
	{
		Person persons[3];
		for (int i = 0; i < 3; i++)
			persons[i].name = "object-" + converting_string(i); //Warning: It only changes the name. It is good when we have only one thing from string.
		for (int i = 0; i < 3; i++)
			persons[i].print();
	}
	system("pause");
	return 0;
}