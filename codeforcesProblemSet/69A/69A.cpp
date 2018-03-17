#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, sumx = 0, sumy = 0, sumz = 0;  cin >> n;
  for (ll i = 0; i < n; i++) {
      ll x, y, z;  cin >> x >> y >> z;
      sumx += x;  sumy += y;  sumz += z;
  }
  if (sumx==0 && sumy==0 && sumz==0) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
