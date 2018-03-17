#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int l, r, a;  cin >> l >> r >> a;
  int ans;
  if (abs(l-r) >= a) ans = (a+min(l, r))*2;
  else {
      ans = (max(l, r))*2;
      if (a-(abs(l-r)) == 0) ans += a/2*2;
      else ans += (a-(abs(l-r)))/2 * 2;
  }
  cout << ans << endl;
  return 0;
}
