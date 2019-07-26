#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  bool res = true, changed = false;
  for (int i = 1; i < n; i++) {
      if (a[i] < a[i-1]) {
          if (!changed) changed = true;
      }
      else {
          if (changed) res = false;
      }
  }

  if (res) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
