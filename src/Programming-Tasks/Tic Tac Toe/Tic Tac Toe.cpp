#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <stdlib.h>
using namespace std;
char matrix[4][4];
int orow, ocolumn, xrow, xcolumn;
int drawcounter = 0;
void paint() {
	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++)
			matrix[i][j] = '_';
	}
}
void board() {
	for (int i = 1; i < 4; i++)
		for (int j = 1; j < 4; j++) {
			if (i != 1 && j == 1)
				cout << endl;
			cout << matrix[i][j] << " ";
		}

	cout << endl;
}

void action() {
	while (0 == 0) {
		puts("Time for player X. Enter index");
		cin >> xcolumn >> xrow;
		if (matrix[xcolumn][xrow] == 'X' || matrix[xcolumn][xrow] == 'O') {
			cout << "You can't go to this operation." << endl;
			board();
			action();
		}
		matrix[xcolumn][xrow] = 'X';
		drawcounter += 1;
		if (drawcounter == 9) {
			puts("It's a draw.");
			break;
		}
		board();
		cout << endl;
		if ((matrix[1][1] == 'X' && matrix[2][2] == 'X' && matrix[3][3] == 'X') || (matrix[1][3] == 'X' && matrix[2][2] == 'X' && matrix[3][1] == 'X')) {
			puts("X Wins! Congrats X!");
			break;
		}
		if ((matrix[1][1] == 'X' && matrix[1][2] == 'X' && matrix[1][3] == 'X') || (matrix[2][1] == 'X' && matrix[2][2] == 'X' && matrix[2][3] == 'X') || (matrix[3][1] == 'X' && matrix[3][2] == 'X' && matrix[3][3] == 'X')) {
			puts("X Wins! Congrats X!");
			break;
		}
		if ((matrix[1][1] == 'X' && matrix[2][1] == 'X' && matrix[3][1] == 'X') || (matrix[1][2] == 'X' && matrix[2][2] == 'X' && matrix[3][2] == 'X') || (matrix[1][3] == 'X' && matrix[2][3] == 'X' && matrix[3][3] == 'X')) {
			puts("X Wins! Congrats X!");
			break;
		}
		puts("Time for player O. Enter index");
		cin >> ocolumn >> orow;
		if (matrix[ocolumn][orow] == 'O' || matrix[ocolumn][orow] == 'X') {
			cout << "You can't go to this operation." << endl;
			board();
			action();
		}
		matrix[ocolumn][orow] = 'O';
		drawcounter += 1;
		board();
		cout << endl;
		if ((matrix[1][1] == 'O' && matrix[2][2] == 'O' && matrix[3][3] == 'O') || (matrix[1][3] == 'O' && matrix[2][2] == 'O' && matrix[3][1] == 'O')) {
			puts("O Wins! Congrats O!");
			break;
		}
		if ((matrix[1][1] == 'O' && matrix[1][2] == 'O' && matrix[1][3] == 'O') || (matrix[2][1] == 'O' && matrix[2][2] == 'O' && matrix[2][3] == 'O') || (matrix[3][1] == 'O' && matrix[3][2] == 'O' && matrix[3][3] == 'O')) {
			puts("O Wins! Congrats O!");
			break;
		}
		if ((matrix[1][1] == 'O' && matrix[2][1] == 'O' && matrix[3][1] == 'O') || (matrix[1][2] == 'O' && matrix[2][2] == 'O' && matrix[3][2] == 'O') || (matrix[1][3] == 'O' && matrix[2][3] == 'O' && matrix[3][3] == 'O')) {
			puts("O Wins! Congrats O!");
			break;
		}
	}
}
int main() {
	paint();
	board();
	action();
	system("pause");
	return 0;
}
