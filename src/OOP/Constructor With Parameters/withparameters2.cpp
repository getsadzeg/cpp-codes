#include <iostream>
#include <string>
using namespace std;
class Pig {
public:
	string name;
	int age;
	int weight;
	void information();
	Pig(string, int, int);
	~Pig();
};
void Pig::information() {
	cout << name << endl;
	cout << age << endl;
	cout << weight << endl;
}
Pig::Pig(string a, int b, int c) {
	name = a;
	age = b;
	weight = c;
	cout << "Object Constructed" << endl;
}
Pig::~Pig() {
	cout << "Object Destructed" << endl;
}
int withparameters2() {
	{
		Pig infarm1("kyle", 2, 15);
		Pig infarm2("gayle", 1, 17);
		infarm1.information();
		infarm2.information();
	}
	system("pause");
	return 0;
}