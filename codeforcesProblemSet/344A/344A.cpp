#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n;  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
      cin >> s[i];
  }
  string pre = s[0];
  ll ans = 1;
  for (int i = 1; i < n; i++) {
      if (s[i] != pre) {
          pre = s[i];
          ans += 1;
      }
  }
  cout << ans << endl;

  return 0;
}
