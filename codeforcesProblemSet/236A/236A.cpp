#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<int> c(26, 0);
  string s;  cin >> s;
  for (int i = 0; i < s.size(); i++) {
      c[s[i]-'a'] += 1;
  }
  int val = 0;
  for (int i = 0; i < 26; i++) {
      if (c[i] != 0) val += 1;
  }

  if (val % 2 == 0) cout << "CHAT WITH HER!" << endl;
  else cout << "IGNORE HIM!" << endl;

  return 0;
}
