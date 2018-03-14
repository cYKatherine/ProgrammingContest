#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<vector<char>> s(n, vector<char>(5));
  for (int i = 0; i < n; i++) {
      cin >> s[i][0] >> s[i][1] >> s[i][2] >> s[i][3] >> s[i][4];
  }

  bool ans = false;
  for (int i = 0; i < n; i++) {
      if (!ans) {
          if (s[i][0] == 'O' && s[i][1] == 'O') {
              ans = true;
              s[i][0] = '+';
              s[i][1] = '+';
          }
          else if (s[i][3] == 'O' && s[i][4] == 'O') {
              ans = true;
              s[i][3] = '+';
              s[i][4] = '+';
          }
      }
  }

  if (ans) {
      cout << "YES" << endl;
      for (int i = 0; i < n; i++) {
          cout << s[i][0] << s[i][1] << s[i][2] << s[i][3] << s[i][4] << endl;
      }
  }
  else cout << "NO" << endl;

  return 0;
}
