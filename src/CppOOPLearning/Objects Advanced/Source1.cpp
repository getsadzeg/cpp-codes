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
int Source1() {
	Favorite_Numbers p1;
	Favorite_Numbers p2(2, 14);
	p1.print_data();
	p2.print_data();
	cout << endl;
	p1 = p2; //But,these objects are still different from each other.
	p1.print_data();
	p2.print_data();
	system("pause");
	return 0;
}