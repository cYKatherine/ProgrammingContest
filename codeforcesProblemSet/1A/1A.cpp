#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  ll n, m, a;  cin >> n >> m >> a;
  ll ans = 0;
  if (n % a == 0) {
      ans = n/a;
  }
  else {
      ans = n/a+1;
  }

  if (m % a == 0) {
      ans *= m/a;
  }
  else {
      ans *= m/a+1;
  }

  cout << ans << endl;
  return 0;
}
