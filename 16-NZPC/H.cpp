#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string MP[130][3];
string action[210][2];
int score[130][2];



int main() {
	int relatedScore(string s);
	string getFirstName(int x, int n);
	string getLastName(int x, int n);
	
	
	// Generate MP array
	int n;
	cin >> n >> ws;
	
	for (int i = 0; i < n; i ++) {
		string tmp;
		getline(cin,tmp);
		stringstream ss(tmp);
		ss >> MP[i][0] >> MP[i][1] >> MP[i][2];
	}
	
	// Generate action array
	int A;
	cin >> A >> ws;
	
	for (int i = 0; i < A; i++) {
		string tmp;
		getline(cin, tmp);
		stringstream ss(tmp);
		ss >> action[i][0] >> action[i][1];	
	}
	
	// Initialize the score for each MP
	for (int i = 0; i < n; i++) {
		score[i][0] = atoi(MP[i][0].c_str());
		score[i][1] = 0;
	}
	
	// Generate score array
	for (int i = 0; i < A; i++) {
		int tmp = atoi(action[i][0].c_str());
		for (int j = 0; j < n; j++) {
			if (score[j][0] == tmp)
				score[j][1] += relatedScore(action[i][1]);
		}
	}
	
	// Sort
	for (int i = 0; i < n; i ++) {
		int max = i;
		for (int j = i+1; j < n; j ++) {
			if (score[j][1] > score[max][1])
				max = j;
			else if (score[j][1] == score[max][1] && score[j][0] < score[max][0])
				max = j; 
		}
		swap(score[i][0],score[max][0]);
		swap(score[i][1],score[max][1]);
	}
	
	// Find Max and Min index
	int min = 0;
	for (int j = 1; j < n; j++) {
		if (score[j][1] < score[min][1])
			min = j;
	}
	
	// Print
	int i = 0;
	int j = i + 1;
	cout << score[i][1] << " " << getFirstName(score[i][0],n) << " " << getLastName(score[i][0],n) << " ";
	while (score[j][1] == score[j-1][1] && j < n) {
		cout << getFirstName(score[j][0],n) << " " << getLastName(score[j][0],n) << " ";	
		j += 1;
	}
	cout << endl;
	
	i = min;
	j = i + 1;
	cout << score[i][1] << " " << getFirstName(score[i][0],n) << " " << getLastName(score[i][0],n) << " ";
	while (j < n && score[j][1] == score[j-1][1]) {
		cout << getFirstName(score[j][0],n) << " " << getLastName(score[j][0],n) << " ";
		j += 1;
	}
	cout << endl;
	

	return 0;
}

int relatedScore(string s) {
	if (s == "S")
		return 10;
	else if (s == "Q")
		return 5;
	else if (s == "A")
		return 7;
	else if (s == "L")
		return -8;
	else if (s == "F")
		return 4;
	else if (s == "D")
		return -5;
	else if (s == "E")
		return -10;
}

string getFirstName(int x, int n) {
	for (int i = 0; i < n; i ++) {
		if (x == atoi(MP[i][0].c_str()))
			return MP[i][1];
	}
}

string getLastName(int x, int n) {
	for (int i = 0; i < n; i ++) {
		if (x == atoi(MP[i][0].c_str()))
			return MP[i][2];
	}
}
