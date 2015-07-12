#include <iostream>
#include <string>
using namespace std;
class Wolf {
public:
	int age;
	int weight;
	int power;
	void info();
	Wolf(int, int, int);
	~Wolf();
};
void Wolf::info() {
	cout << age << endl;
	cout << weight << endl;
}
Wolf::Wolf(int b, int c,int k) {
	age = b;
	weight = c;
	power = k;
	cout << "Object Constructed" << endl;
}
Wolf::~Wolf() {
	cout << "Object Destructed" << endl;
}
int withparameters3() {
	Wolf inforest1(2, 15,100);
	Wolf inforest2(1, 17,100);
	inforest1.info();
	inforest2.info();
	system("pause");
	return 0;
}