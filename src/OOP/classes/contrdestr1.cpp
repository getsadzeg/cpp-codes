#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	string name;
	string surname;
	int age;
	string profession;
	string sex;
	void print();
	Person();
	~Person();
};
void Person::print() {
	cout << name << endl;
	cout << surname << endl;
	cout << age << endl;
	cout << profession << endl;
	cout << sex << endl;
}
Person::Person() {
	name = "guri";
	surname = "getsadze";
	age = 12;
	profession = "programmer";
	sex = "male";
	cout << "Object Constructed." << endl;
}
Person::~Person() {
	cout << "Object Desctructed." << endl;
}
int main() {
	{
		Person p1;
		p1.print();
	}
	system("pause");
	return 0;
}