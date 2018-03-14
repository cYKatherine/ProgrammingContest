#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, ans = 0;  cin >> n;
  if (n % 2 == 0) {
      ans += (2 + n) / 2 * (n / 2);
      ans -= (1 + n - 1) / 2 * (n / 2);
  }
  else {
      ans += (2 + n-1) / 2 * ((n-1)/2);
      ans -= (1 + n) / 2 * ((n+1)/2);
  }
  cout << ans << endl;

  return 0;
}
