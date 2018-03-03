#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n;  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
      cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
      if (s[i].size() <= 10) {
          cout << s[i] << endl;
      }
      else {
          string tmp = s[i][0] + to_string(s[i].size()-2) + s[i][s[i].size()-1];
          cout << tmp << endl;
      }
  }
  return 0;
}
