#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<int> p(n), q(n);
  for (int i = 0; i < n; i++) {
      cin >> p[i] >> q[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
      if (q[i]-p[i]>=2) ans += 1;
  }
  cout << ans << endl;

  return 0;
}
