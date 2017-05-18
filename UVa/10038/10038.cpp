#include <bits/stdc++.h>

using namespace std;

vector<int> num;
vector<int> test;

bool check(vector<int> num) {
	vector<int> v;
	for (int i = 0; i < num[0]; i++){
		v.push_back(0);
	}

	if (num[0] == 1) {
		return true;
	}
	for (int i = 1; i < num.size()-1; i++) {
		int tmp = abs(num[i+1] - num[i]);
		if (v[tmp-1] == 1 || tmp > num[0]-1 || tmp == 0) {
			return false;
		}
		else
			v[tmp-1] = 1;
	}

	return true;
}

int main(){
	string str;
	while (getline(cin,str)){		
		num.clear();
		test.clear();

		stringstream ss(str);
		string token;
		while (getline(ss,token,' ')){
			stringstream tmp1(token);
			int kk;
			tmp1 >> kk;
			num.push_back(kk);
		}

		
		if (check(num))
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	return 0;
}
