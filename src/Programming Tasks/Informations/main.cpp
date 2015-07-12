#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
ifstream ifs("/home/user/Informations/info.txt");
ofstream ofs("/home/user/Informations/years.txt"); //it may be empty at the beginning
class Person {
private:
    int numeration;
    string name;
    string surname;
    int age;
public:
    void setInfo(int alternateNumeration, string alternateName, string alternateSurname, int alternateAge) {
        numeration = alternateNumeration;
        name = alternateName;
        surname = alternateSurname;
        age = alternateAge;
    }

    void getwriteInfo() {
        while(ifs>>numeration>>name>>surname>>age) {
                cout<<numeration << " " << name << " " << surname << " " << age << endl;
                ofs << name << " " << surname << " " << 2015 - age << endl;
    }
    }
//    void writeInfo() {
//         while(ifs>>numeration>>name>>surname>>age)
//             ofs << name << " " << surname << " " << 2015 - age << endl;
//    }
};

int main() {
    int Num;
    string Name;
    string Surname;
    int Age;
    vector <Person> v;
    Person adamiani;
    //adamiani.setInfo(Num,Name,Surname,Age);
    cout << "Informations in 'info.txt' file:" << endl;
    cout << endl << endl;
    adamiani.setInfo(Num,Name,Surname,Age);
    adamiani.getwriteInfo();
    cout << endl;
    cout << "Go to 'years.txt' file and see results." << endl;
    cout << endl;
    v.push_back(adamiani);
    //adamiani.writeInfo();
    return 0;
}
