#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  for (int i = 0; i < s.size(); i++) {
  	if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
		cout << "YES" << endl;
		return 0;
	}
  }
  cout << "NO" << endl;
  return 0;
}
