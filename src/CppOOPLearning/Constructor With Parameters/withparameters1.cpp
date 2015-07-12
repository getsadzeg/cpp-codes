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
	Person(int,string,string,string,string);
	~Person();
};
void Person::print() {
	cout << name << endl;
	cout << surname << endl;
	cout << age << endl;
	cout << profession << endl;
	cout << sex << endl;
}
Person::Person(int a,string s,string b,string c,string k) {
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
		Person p1(12, "guri","getsadze","programmer","male");
		Person p2(11, "lizi","sharvashidze","actor","female");
		p1.print();
		p2.print();
	}
	system("pause");
	return 0;
}