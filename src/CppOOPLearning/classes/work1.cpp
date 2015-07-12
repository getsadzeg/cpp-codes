#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class People{
public:
	string name;
	string surname;
	int age;
	string profession;
	string sex;
};
int main() {
	People people[50];
	///*for (int i = 0; i < 10; i++)
	//	cin >> people[i].profession;*/
	//for (int i = 0; i < 10; i++)
	//cin >> people[i].sex;
	//cout << endl << endl << endl;
	//for (int i = 0; i < 10; i++)
	//	cout << people[i].sex << endl;
	//for (int j = 0; j < 10; j++)
	//	if (people[j].sex == "Male")
	//		cout << people[j].sex << endl;
	ifstream file("class.txt");
	for (int i = 0; i < 50; i++) {
		file >> people[i].name;
		file >> people[i].surname;
		file >> people[i].age;
		file >> people[i].profession;
		file >> people[i].sex;
	}
	for (int i = 0; i < 50; i++) {
		string a, b;
		cin >> a >> b;
		if (people[i].name == a && people[i].surname == b) {
			cout << people[i].name << endl;
			cout << people[i].surname << endl;
			cout << people[i].age << endl;
			cout << people[i].profession << endl;
			cout << people[i].sex << endl;
		}
		else
			for (int i = 0; i < 50; i++)
				if (people[i].name == a && people[i].surname == b) {
					cout << people[i].name << endl;
					cout << people[i].surname << endl;
					cout << people[i].age << endl;
					cout << people[i].profession << endl;
					cout << people[i].sex << endl;
				}
	}
	/*if (people[i].name == "")
		break;
		cout << people[i].name << endl;
		cout << people[i].surname << endl;
		cout << people[i].age << endl;
		cout << people[i].profession << endl;
		cout << people[i].sex << endl;
		cout << endl;*/
	system("pause");
	return 0;
}
