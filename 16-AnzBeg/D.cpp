#include<iostream>
#include<string>
#include<vector>

using namespace std;

string building[20][20];
string desert[70][70];
vector< vector<int> > sharp;


int main() {
	int b1,b2;
	cin >> b1;
	cin >> b2;
	
	for (int i = 0; i < b1; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < b2; j++) {
			building[i][j] = tmp[j];
			if (building[i][j] == "#"){
				vector <int> tmp;
				tmp.push_back(i);
				tmp.push_back(j);
				sharp.push_back(tmp);
			}		
		}
	}
	
	int d1,d2;
	cin >> d1;
	cin >> d2;
	
	for (int i = 0; i < d1; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < d2; j ++) {
			desert[i][j] = tmp[j];
		}
	}
	
	int number = 0;
	
	for(int i = 0; i < (d1-b1+1); i++) {
		for (int j = 0; j < (d2-b2+1); j++) {
			bool found = true;
			for (int z = 0; z < sharp.size(); z++) {
				if (desert[i+sharp[z][0]][j+sharp[z][1]] != "#")
					found = false;
			}
			
			if (found)
				number += 1;
		}
	}
	
	cout << number << endl;
	
	return 0;
}
