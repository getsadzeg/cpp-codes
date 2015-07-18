#include <iostream>
#include <string>
#include <vector>
using namespace std;
char ans;
class Student {
private:
    long long Id;
    string Name;
    string Surname;
    int Age;
public:
    Student(long long altId,string altName,string altSurname, int altAge) {
        Id = altId;
        Name = altName;
        Surname = altSurname;
        Age = altAge;
    }
    void printInfo() {
        cout << Id << endl;
        cout << Name << endl;
        cout << Surname << endl;
        cout << Age << endl;
    }
};
void func() {
    vector <Student> v;
    long long id;
    string name;
    string surname;
    int age;
    cout << "Enter new information" << endl;
    cin >> id;
    cin >> name;
    cin >> surname;
    cin >> age;
    Student pupil(id,name,surname,age);
    v.push_back(pupil);
    cout << "Continue? (y/n)" << endl;
    cin >> ans;
    if(ans == 'y') {
        func();
    }
    if(ans == 'n') {
        //system("cls"); //problem. don't working on linux. So on Windows it's working fine.
        cout << "Information that you entered is:" << endl;
        v[0].printInfo();
    }
}

int main() {
    func();
    return 0;
}
