#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m;  cin >> n >> m;
  vector<int> p(m);
  for (int i = 0; i < m; i++) {
      cin >> p[i];
  }
  sort(p.begin(), p.end());
  int ans = 1005;
  for (int i = 0; i < m-n+1; i++) {
      int tmp = p[i+n-1] - p[i];
      ans = min(ans, tmp);
  }
  cout << ans << endl;

  return 0;
}
