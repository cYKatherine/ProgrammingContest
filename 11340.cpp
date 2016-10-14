#include <bits/stdc++.h>

using namespace std;

int character[128];


int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;

		for (int j = 0; j < 128; j++) {
			character[j] = 0;
		}

		for (int j = 0; j < k; j++) {
			char cha;
			int num;
			cin >> cha;
			cin >> num;

			character[(int)cha] = num;
		}
		
		int m;
		cin >> m >> ws;

		int total = 0;

		for (int j = 0; j < m; j++) {
			string ss;
			getline(cin,ss);
			
			for (int k = 0; k < ss.size(); k++) {
				total += character[(int)ss[k]];
			}
		}
		

		stringstream t;
		t << total%100;
		string cent;

		t >> cent;

		if (cent.size() == 1)
			cent = '0' + cent;


		cout << total/100 << "."  << cent <<  "$" << endl;
	}

	return 0;
}
