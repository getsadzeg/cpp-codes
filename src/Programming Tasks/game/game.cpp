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


//#include <iostream>
//#include <string>
//#include <vector> 
//using namespace std;
//int main() {
//	char lastChar;
//	int score = 0;
//	for (int i = 0; i < 200; i++) {
//		vector <string> v;
//		vector <char> v1;
//		string word;
//		cin >> word;
//		score += 1;
//		char firstChar1 = word[0];
//		if (i >= 1){                //check in 2nd iteraion and so on iteration.
//			if (lastChar != firstChar1)
//				break;
//		}
//		lastChar = word.at(word.length() - 1);
//		cout << "Word's last character is:" << lastChar << endl;
//
//		//v.push_back(word);
//		if (i == 1) {
//			v1.push_back(lastChar);
//			v1.push_back(firstChar1);
//		}
//		string word1;
//		cin >> word1;
//		char firstChar = word1[0];
//		cout << "Word's first character is:" << firstChar << endl;
//		if (i == 1) {
//			score -= 1;
//			v1.push_back(firstChar);
//		}
//		char lastChar1 = word1.at(word1.length() - 1);
//		v1.push_back(lastChar1);
//		if (lastChar != firstChar) {
//			break;
//		}
//		lastChar = word1.at(word1.length() - 1);    //new line added.
//	}
//	cout << "Game stopped. Your score is:" << score << endl;
//	system("pause");
//	return 0;
//}