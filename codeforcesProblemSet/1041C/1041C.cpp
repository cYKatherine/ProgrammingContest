#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, m, d;  cin >> n >> m >> d;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
  }

  ll days = 1;
  sort(b.begin(), b.end());
  set<pair<ll, int>> check;
  map<ll, int> ans;
  check.insert({b[0], 1});
  ans[b[0]] = 1;
  for (int i = 1; i < n; i++) {
      auto it = check.upper_bound({b[i]-d-1, 2e9});
      if (it == check.begin()) {
          days++;
          check.insert({b[i], days});
          ans[b[i]] = days;
      }
      else {
          it--;
          ll tmp = it->second;
          // REMEMBER to erase iterator after modify it
          check.erase(it);
          check.insert({b[i], tmp});
          ans[b[i]] = tmp;
      }
  }

  cout << days << endl;
  for (int i = 0; i < n; i++) cout << ans[a[i]] << " ";
  cout << endl;

  return 0;
}
