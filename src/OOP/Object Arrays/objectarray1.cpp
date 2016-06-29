#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string convert_string(int i) {
	stringstream s;
	s << i;
	return s.str();
}
class Pig {
public:
	string name;
	int age;
	int weight;
	void information();
	Pig(string = "bale", int = 2, int = 1);
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
int objectarray1() {
	{
		Pig pigs[3];
		for (int i = 0; i < 3; i++)
			pigs[i].name = "object-" + convert_string(i);
		for (int i = 0; i < 3; i++)
			pigs[i].information();
	}
	system("pause");
	return 0;
}