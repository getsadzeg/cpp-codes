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
    virtual void sayHello() = 0; //The classes which include that,is called Abstract Classes.
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
    void sayHello() { //We must code this functiion. we must.
        cout << "Hello! I'm Programmer!" << endl;
    }
};
class JuniorProgrammer : public Programmer {
public:
    JuniorProgrammer(string l, int a, string n) : Programmer(l,a,n) {
    }

    void sayHello() { //We must code this functiion. we must.
        cout << "Hello! I'm junior programmer!" << endl;
    }
};

int main() {
    JuniorProgrammer p1("c++",12,"guri");
    Programmer p2("java,",18,"nika");
    Person *pointer;
    pointer = &p1;
    pointer->sayHello();
    pointer = &p2;
    pointer->sayHello();
    return 0;
}
