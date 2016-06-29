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
    virtual void sayHello() { //If it will be void function without keyword 'virtual',It will have output like that: three times "Hello! I'm person!".
        cout << "Hello! I'm Person!" << endl;
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
    void sayHello() {
        cout << "Hello! I'm Programmer!" << endl;
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
    Person p3(20,"irakli");
    Person *pointer;
    pointer = &p1;
    pointer->sayHello();
    pointer = &p2;
    pointer->sayHello();
    pointer = &p3;
    pointer->sayHello();
    return 0;
}

