#include <iostream>
using namespace std;
class Person {
protected:
int age;
string name;
public:
Person(int a,string n) {
    age = a;
    name = n;
}
    void ShowPersonInfo() {
        cout << name << " " << age << endl;
    }
};
class Programmer : public Person {
public:
    string language;
    Programmer(string l,int a, string n) : Person(a,n) {
        language = l;
    }

    void showProgrammerInfo() {
        cout << name << "," << age << "," << language << endl;
    }
};
class JuniorProgrammer : public Programmer {
public:
    JuniorProgrammer(string l, int a, string n) : Programmer(l,a,n) {
    }

    void sayHello() {
        cout << "Hello! I'm junior programmer!" << endl;
    }
};

int main() {
    JuniorProgrammer juniorworker("c++",12,"guri");
    juniorworker.sayHello();
    juniorworker.showProgrammerInfo();
    return 0;
}
