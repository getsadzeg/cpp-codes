#include <iostream>
using namespace std;
class Favorite_Numbers {
private:
	int i1;
	int i2;
public:
	Favorite_Numbers() {
		i1 = 3;
		i2 = 7;
	}
	Favorite_Numbers(int j1, int j2) {
		i1 = j1;
		i2 = j2;
	}
	void print_data() {
		cout << i1 << " " << i2 << endl;
	}
};
int main() {
	Favorite_Numbers p1;
	p1.print_data();
	system("pause");
	return 0;
}