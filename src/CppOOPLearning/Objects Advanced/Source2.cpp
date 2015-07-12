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
	void set_data(int j1,int j2) {
		i1 = j1;
		i2 = j2;
	}
	void printdata() {
		cout << i1 << " " << i2 << endl;
	}
};
void show_object_data(Favorite_Numbers s) {
	s.set_data(15, 16);
	cout << "show_object_data" << endl;
	s.printdata();
}
int main() {
	Favorite_Numbers p1(2,4);
	show_object_data(p1);
	p1.printdata();
	system("pause");
	return 0;
}