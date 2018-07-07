#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0, current = 0, pre = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] >= pre) {
      current++;
    }
    else {
      ans = max(ans, current);
      current = 1;
    }
    pre = a[i];
  }
  ans = max(ans, current);
  cout << ans << endl;

  return 0;
}
