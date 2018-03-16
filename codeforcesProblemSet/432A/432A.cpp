#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k, ans = 0;  cin >> n >> k;
  vector<int> y(n);
  for (int i = 0; i < n; i++) {
      cin >> y[i];
      if (y[i] + k <= 5) ans += 1;
  }
  cout << ans/3 << endl;

  return 0;
}
