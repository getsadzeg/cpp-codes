#include <iostream>
using namespace std;
class Sample {
private:
    int i1;
    int i2;
public:
    Sample(int j1, int j2) {
        i1 = j1;
        i2 = j2;
    }
    void print_data() {
        cout << i1 << " " << i2 << endl;
    }
    friend void learnfunc(Sample p);
};
void learnfunc(Sample p) {
    cout << p.i1 << " " << p.i2 << endl;
}

int main() {
    Sample p(3,4);
    learnfunc(p);
    return 0;
}
