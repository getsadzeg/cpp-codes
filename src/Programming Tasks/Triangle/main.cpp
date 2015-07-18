#include <iostream>
#include <string>
using namespace std;
class Rectangle {
private:
    int first;
    int second;
    int third;
public:
    Rectangle(int first1,int second1,int third1) {
        first = first1;
        second = second1;
        third = third1;
    }
    int Perimeter(int first1,int second1,int third1) {
        return first1 + second1 + third1;
    }
};
int main() {
    int n,n1,n2;
    cin >> n >> n1 >> n2;
    if(!cin) cout << "Number must be real" << endl;
    Rectangle(n,n1,n2);
    Rectangle rec(n,n1,n2);
    cout << rec.Perimeter(n,n1,n2) << endl;
     return 0;
}
