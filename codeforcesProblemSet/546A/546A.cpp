#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll k, n, w;  cin >> k >> n >> w;
  ll ans = (1+w)*w/2*k-n;
  if (ans > 0) cout << ans << endl;
  else cout << 0 << endl;

  return 0;
}
