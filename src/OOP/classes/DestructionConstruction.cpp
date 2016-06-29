#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	string name;
	int age;
	/*string surname;
	int age;
	string profession;
	string sex;*/
	void print();
	~Person();
	Person();
};
void Person::print() {
	age = 12;
	cout << name << endl;
}
Person::Person() {
	name = "guri";
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