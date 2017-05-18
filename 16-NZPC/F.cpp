#include<iostream>
#include<string>
#include<vector>

using namespace std;

string puzzle[30];
vector <char> alpha;

bool inAlpha(char x) {
	for (int i = 0; i < alpha.size(); i++) {
		if (x == alpha[i])
			return true;
	}
	return false	;
}

int main() {
	int s;
	cin >> s >> ws;
	
	for (int i = 0; i < s; i ++) {
		getline(cin, puzzle[i]);
	}
	
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (puzzle[i][j] != ' ') {
				if (!inAlpha(puzzle[i][j]))
				alpha.push_back(puzzle[i][j]);
			}	
		}
	}
	
	for (int i = 0; i < alpha.size(); i++) {
		cout << alpha[i];
	}
	cout << endl;
	
	
	return 0;
}
