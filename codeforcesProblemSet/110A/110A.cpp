#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  ll val = 0;
  for (int i = 0; i < s.size(); i++) {
      if (s[i] == '4' || s[i] == '7') val += 1;
  }
  string ss = to_string(val);
  for (int i = 0; i < ss.size(); i++) {
      if (ss[i] != '4' && ss[i] != '7') {
          cout << "NO" << endl;
          return 0;
      }
  }
  cout << "YES" << endl;
  return 0;
}
