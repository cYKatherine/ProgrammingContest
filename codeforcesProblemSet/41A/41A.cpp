#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s, t;  cin >> s >> t;
  for (int i = 0; i < s.size(); i++) {
      if (s[i] != t[t.size()-1-i]) {
          cout << "NO" << endl;
          return 0;
      }
  }
  cout << "YES" << endl;

  return 0;
}
