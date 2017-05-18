#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n >> ws;

	string ss;
	getline(cin,ss);
	
	int longestWord = 0, noOfWord = 0, currentLen = 0;
	bool inBracket = false, preLetter = false;

	for (int i = 0; i < n; i ++) {
		if (ss[i] == 95 && !inBracket) {
			if (preLetter) {
				if (currentLen > longestWord)
					longestWord = currentLen;

				currentLen = 0;
				preLetter = false;
			}
			else {
				preLetter = false;
			}
		}
		else if (ss[i] == 95 && inBracket) {
			if (preLetter) {
				noOfWord += 1;
			}
			preLetter = false;
		}
		else if (ss[i] == 40) {
			if (currentLen > longestWord)
					longestWord = currentLen;

			currentLen = 0;
			inBracket = true;
			preLetter = false;
		}
		else if (ss[i] == 41) {
			if (preLetter) 
				noOfWord += 1;
			currentLen = 0;
			inBracket = false;
			preLetter = false;
		}
		else {
			currentLen += 1;
			preLetter = true;
		}
	}
	if (currentLen > longestWord)
		longestWord = currentLen;

	cout << longestWord << " " << noOfWord << endl;

	return 0;
}
