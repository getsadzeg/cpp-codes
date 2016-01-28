#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Car {
private:
    string name;
    string model;
    int Nseats;
    int maxSpeed;
public:
    Car(string alternateName,string alternateModel,int alternateNseats,int alternatemaxSpeed) {
        name = alternateName;
        model = alternateModel;
        Nseats = alternateNseats;
        maxSpeed = alternatemaxSpeed;
    }
    string namereturn() {
        return name;
    }
    string modelreturn() {
        return model;
    }
    int Nseatsreturn() {
        return Nseats;
    }
    int maxSpeedreturn() {
        return maxSpeed;
    }
};
int main() {
    ofstream low("lowspeed.txt");
    ofstream high("highspeed.txt");
    Car obj5("Honda","civic",5,210);
    Car obj1("mercedes","ml",4,220);
    Car obj2("BMW","x5",4,230);
    Car obj3("Opel", "vectra",5,180);
    Car obj4("WW","golf",3,170);
    vector <Car> v;
    v.push_back(obj1);
    v.push_back(obj2);
    v.push_back(obj3);
    v.push_back(obj4);
    v.push_back(obj5);
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v.size()-1; j++) {
            if(v[j].Nseatsreturn() < v[j+1].Nseatsreturn()) swap(v[j],v[j+1]);
        }
    }
    cout << "The information:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].namereturn() << " " << v[i].modelreturn() << " " << v[i].Nseatsreturn() << " " << v[i].maxSpeedreturn() << endl;
        if(v[i].maxSpeedreturn() < 200) low << v[i].namereturn() << " " << v[i].modelreturn() << " " << v[i].Nseatsreturn() << " " << v[i].maxSpeedreturn() << endl;
        else
        high << v[i].namereturn() << " " << v[i].modelreturn() << " " << v[i].Nseatsreturn() << " " << v[i].maxSpeedreturn() << endl;
    }
    return 0;
}
