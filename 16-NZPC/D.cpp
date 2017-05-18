#include <iostream>
#include <string>
#include <vector>

using namespace std;

string userInput[40];

bool isPalindrome(string s, int n) {
	vector<char> tmp1;
	vector<char> tmp2;
	
	for (int i = 0; i < s.size(); i++){
		if (i != n)
			tmp1.push_back(s[i]);
			
		if ((s.size() - i - 1) != n)
			tmp2.push_back(s[s.size() - i - 1]);
	}
	
	for (int i = 0; i < tmp1.size(); i++) {
		if (tmp1[i] != tmp2[i])
			return false;
	}
	return true;
}

void printPalindrome(string s, int n) {
	for (int i = 0; i < s.size(); i++) {
		if (i != n)
			cout << s[i];
	}
	cout << endl;
}

int main() {
	int i = 0;
	string tmp = "0";
	
	while (tmp != "#") {
		cin >> userInput[i];
		tmp = userInput[i];
		i += 1;
	}
	
	i = 0;
	tmp = userInput[0];
	while (tmp != "#") {
		int j = 0;
		bool found = false;
		while (j < userInput[i].size() && !found){
			if (isPalindrome(userInput[i],j)){
				found = true;
				printPalindrome(userInput[i],j);
			}
			j += 1;
		}
		if (!found)
			cout << "not possible" << endl;
		i += 1;
		tmp = userInput[i];
	}
	
	return 0;
}
