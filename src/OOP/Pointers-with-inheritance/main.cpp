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
    JuniorProgrammer p1("c++",12,"guri");
    Programmer p2("java,",18,"nika");
    Programmer *pointer;
    pointer = &p1;
    pointer->showProgrammerInfo();
    //pointer->sayHello(); //It won't work.
    pointer = &p2;
    pointer->showProgrammerInfo();
    return 0;
}
