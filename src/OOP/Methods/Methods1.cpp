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
};
void Person::print() {
	cout << name << endl;
	cout << surname << endl;
	cout << age << endl;
	cout << profession << endl;
	cout << sex << endl;
}
int Methods1() {
	Person p1;
	Person p2;
	p1.name = "guri";
	p1.surname = "getsadze";
	p1.age = 12;
	p1.profession = "programmer";
	p1.sex = "male";
	p2.name = "lizi";
	p2.surname = "sharvashidze";
	p2.age = 11;
	p2.profession = "actor";
	p2.sex = "female";
	cout << "Hello" << " ";
	p1.print();
	cout << endl << endl;
	cout << "Hello" << " ";
	p2.print();
	system("pause");
	return 0;
}