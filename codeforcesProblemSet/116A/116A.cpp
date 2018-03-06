#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
      cin >> a[i] >> b[i];
  }
  int ans = 0, total = 0;
  for (int i = 0; i < n; i++) {
      total += b[i];
      total -= a[i];
      ans = max(total, ans);
  }

  cout << ans << endl;

  return 0;
}
