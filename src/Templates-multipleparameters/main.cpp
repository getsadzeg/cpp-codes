#include <iostream>
using namespace std;
template <class First,class Second> //It has multiple parameters.
First smallnum(First a,Second b) {
    return (a<b?a:b);
}

int main() {
    int x = 80;
    double y = 10.12; //Y's data type is different. That's why we need mutliple parameters in template.
    cout << smallnum(y,x) << endl; //It returns double number. If we write: smallnum(x,y) It will return int type number(10).
return 0;
}
