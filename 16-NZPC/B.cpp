#include<iostream>
#include<string>

using namespace std;

string userInput[40];
int hole[27][2] = {{32,0},{65,1},{66,2},{67,0},{68,1},{69,0},{70,0},{71,0},{72,0},{73,0},{74,0},{75,0},{76,0},{78,0},{79,1},{80,1},{81,1},{82,1},{83,0},{84,0},{85,0},{86,0},{87,0},{89,0},{90,0}};

int main() {
	int n;
	cin >> n >> ws;
	
	for (int i = 0; i < n; i++) {
		getline(cin,userInput[i]);
	}
	
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < userInput[i].size(); j++) {
			for (int k = 0; k < 27; k++) {
				if ((int)userInput[i][j] == hole[k][0])
					sum += hole[k][1];
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}

