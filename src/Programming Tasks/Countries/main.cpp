#include <iostream>
#include <string>
#include <vector>
using namespace std;
char ans1 = 'y';
string countryname;
class Country {
private:
    string Name;
    string capitalCity;
    int Population;
    int Area;
public:
    void setInfo(string altName, string altcapitalCity, int altPopulation,int altArea){
            Name=altName;
            capitalCity=altcapitalCity;
            Population=altPopulation;
            Area=altArea;
        }
    int splittedArea() {
        return Population/Area;
    }
    string getName() {
        return Name;
    }
};
int main() {
    string name;
    string capitalcity;
    int population;
    int area;
    Country qveyana;
    vector <Country> v;
    while(ans1 == 'y') {
    cout << "Enter new information" << endl;
    cin >> name;
    cin >> capitalcity;
    cin >> population;
    cin >> area;
    qveyana.setInfo(name,capitalcity,population,area);
    v.push_back(qveyana);
    cout << "Continue? (y/n)" << endl;
    cin >> ans1;
}
        cout << "Enter country name to get information:" << endl;
        cin >> countryname;
        for(int i=0;i<v.size();i++){
                if (v[i].getName()==countryname)
                    cout<<v[i].splittedArea()<<endl;
            }
   // core1();
    return 0;
}
