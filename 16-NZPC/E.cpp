#include <iostream>
#include <string>

using namespace std;

int main() {
	int k;
	cin >> k >> ws;
	string encrypted;
	getline(cin, encrypted);
	
	for (int i = 0; i < encrypted.size(); i++) {
		int tmp;
		tmp = (int)encrypted[i];
		if (tmp >= 97 && tmp <= 122) {
			tmp = tmp - k;
			if (tmp < 97)
				tmp += 26;
			k += 1;
			if (k > 25)
				k  = 1;
		}
		cout << (char)tmp;
	}
	cout << endl;

	return 0;
}
