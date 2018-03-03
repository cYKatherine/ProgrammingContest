#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<char> c(n);
  for (int i = 0; i < n; i++) {
      cin >> c[i];
  }

  int ans = 0, pre = c[0];
  for (int i = 1; i < n; i++) {
      if (c[i] == pre) {
          ans += 1;
      }
      else {
          pre = c[i];
      }
  }

  cout << ans << endl;;

  return 0;
}
