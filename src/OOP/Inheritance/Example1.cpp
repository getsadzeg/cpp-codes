#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
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

int main() {
    Programmer worker; //Also we can create Person's object,of course.
    worker.name = "Guri";
    worker.age = 12;
    worker.language = "C++";
    worker.showProgrammerInfo();
    return 0;
}
