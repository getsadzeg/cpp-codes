//It's C++ style of struct(structures).

#include <stdio.h>
#include <iostream>
using namespace std;
struct Person {
	const char *name;
	const char *surname;
	int age;
};
void printinfo(struct Person x) {
	cout << "name: " << x.name << endl;
	cout << "surname: " << x.surname << endl;
	cout << "age: " << x.age << endl;

}
int main() {
	Person p =  {"guri","getsadze",12}; 
	printinfo(p);
	return 0;
}