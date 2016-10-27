#include <bits/stdc++.h>

using namespace std;

int character[26];

int main(){
	string tmp;

	for (int i = 0; i < 26; i++) {
		character[i] = 0;
	}
	
	getline(cin,tmp);

	while (tmp != "#"){
		if (next_permutation(tmp.begin(),tmp.end()))
			cout << tmp << endl;
		else
			cout << "No Successor" << endl;

		getline(cin,tmp);
	}

	return 0;
}
