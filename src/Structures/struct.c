//It's C style of struct(structures).

#include <stdio.h>
struct Person {
	const char *name;
	const char *surname;
	int age;
};
void printinfo(struct Person x) {
	printf("name : %s\n", x.name);
	printf("surname : %s\n", x.surname);
	printf("age : %i\n", x.age);

}
int main() {
	struct Person p = {"guri","getsadze",12};
	printinfo(p);
	return 0;
}
