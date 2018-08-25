#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
      cin >> a[i];
  }
  ll ans = 1, cur = 1;
  for (int i = 0; i < n-1; i++) {
      if (a[i+1] > 2*a[i]) {
          ans = max(cur, ans);
          cur = 1;
      }
      else cur++;
  }
  cout << max(ans, cur) << endl;;

  return 0;
}
