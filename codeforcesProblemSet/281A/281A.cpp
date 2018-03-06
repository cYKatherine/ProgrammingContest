#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  cout << (char)toupper(s[0]);
  for (int i = 1; i < s.size(); i++) {
      cout << s[i];
  }
  cout << endl;

  return 0;
}
