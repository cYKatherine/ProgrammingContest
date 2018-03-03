#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans = 0;  cin >> n;
  for (int i = 0; i < n; i++) {
      string s;  cin >> s;
      if (s[0] == 'X') {
          if (s[1] == '+') ans++;
          else ans--;
      }
      else {
          if (s[0] == '+') ans++;
          else ans--;
      }
  }
  cout << ans << endl;

  return 0;
}
