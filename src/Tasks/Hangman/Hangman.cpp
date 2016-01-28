#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
string conceivedword;
string hint;
string choice;
string first_player_word;
string characterstring;
int counter = 0;
int attempts = 0;
bool h;
vector <char> v;
void first_player() {
	cout << "Welcome to Hangman! //Firstgamerzone " << endl;
	cout << "Please conceive the word" << endl;
	getline(cin, conceivedword);
	for (int i = 0; i < conceivedword.length(); i++) v.push_back('_');
	cout << "Type the hint" << endl;
	getline(cin, hint);
	system("cls");
	cout << "The hint is: " << hint << endl;
}
void second_player() {
	while (0 == 0) {
		cout << "Type word or character" << endl;
		getline(cin, first_player_word);
		if (first_player_word.length() > 1) {
			if (first_player_word == conceivedword) {
				counter += 1;
				attempts += 1;
				cout << "Congrats! You are winner!" << endl;
				cout << "You guessed in:" << attempts << " " << "attempt(s)" << endl;
				break;
			}
			else {
				cout << "Not right. You lost." << endl;
				break;
			}
		}
		else if (first_player_word.length() == 1) {
			counter += 1;
			attempts += 1;
			char character = first_player_word[0];
			int exists = conceivedword.find(character);
			bool firstexisting = conceivedword.find_first_not_of(character);
			int index = conceivedword.find(character);
			if (exists > 0 || firstexisting == true) {
				counter -= 1;
				cout << "Right. You rock: " << endl;
				for (int i = 0; i < conceivedword.length(); i++) {
					if (conceivedword[i] == character) v[i] = character;
					cout << v[i] << " ";
				}
				h = find(v.begin(), v.end(), '_') != v.end();
				if (h != true)  {
					cout << "Congrats! You are winner!" << endl;
					cout << "You guessed in:" << attempts << " " << "attempts" << endl; 
					system("pause");
					exit(EXIT_FAILURE);
				}
				second_player();
				cout << endl;
			}
			else if (exists <= 0 && firstexisting == false) {
				if (counter == 5) {
					cout << "You lost. You had only 5 attempts" << endl;
					break;
				}
				else {
					cout << "Not right. Try again. You left: " << 5 - counter << " incorrect attempts" << endl;
					second_player();
				}
			}
			break;
		}
	}
}
int main() {
	system("Color 3");
	first_player();
	second_player();
	system("pause");
	return 0;
}