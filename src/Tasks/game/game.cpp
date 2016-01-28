#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector <string> words;
	char lastChar;
	bool play = true;
	bool repeatalgorithm;
	int score = 0;

	while (play) {
		string word;
		cout << "Enter the word" << endl;
		cin >> word;
		if (words.size() == 0) {
			score += 1;
			lastChar = word.at(word.length() - 1);
		}
		else {
			if (word.at(0) == lastChar) {
				score += 1;
				lastChar = word.at(word.length() - 1);
			}
			else {
				cout << "Game stopped,you're not correct! Your score is: " << score << endl;
				break;
			}
		}
		words.push_back(word);
		for (int i = 0; i < words.size() - 1; i++) {
			if (word != words[i]) {
				repeatalgorithm = false;
			}
			else {
				cout << "Game stopped,you've repeated the word. Your score is:  " << score << endl;
				break;
			}
		}
			//words.push_back(word);
			cout << "last character is: " << lastChar << endl;
		}
	system("pause");
	return 0;
}
