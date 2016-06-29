#include <iostream>
using namespace std;
class Person {
protected: //It cannot accessable from main(),when we make Person's object. But it's accessable from Programmer class(Only in Programmer's methods).
int age; //Output - 1,because it's address.
string name;
public:
    void ShowPersonInfo() {
        cout << name << " " << age << endl;
    }
};
class Programmer : public Person {
public:
    string language;
    void showProgrammerInfo() {
        cout << name << "," << age << "," << language << endl;
    }
};

int Example2() {
    Programmer worker;
    worker.language = "C++";
    worker.showProgrammerInfo();
    return 0;
}
