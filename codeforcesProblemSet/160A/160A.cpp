#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
      cin >> a[i];
  }
  int ans = 0, sum = 0, cur = 0;
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
      sum += a[i];
  }

  for (int i = n-1; i >= 0; i--) {
      cur += a[i];  sum -= a[i];  ans += 1;
      if (cur > sum) {
          cout << ans << endl;
          return 0;
      }
  }
  cout << ans << endl;

  return 0;
}
