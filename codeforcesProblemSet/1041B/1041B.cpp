#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll a, b, x, y;  cin >> a >> b >> x >> y;
  ll gcd = __gcd(x, y);
  if (gcd != 1) {
      x /= gcd;
      y /= gcd;
  }
  cout << min(a/x, b/y) << endl;

  return 0;
}
