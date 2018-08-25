#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

struct Comp {
  bool operator()(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    if (a.first != b.first) {
      return a.first < b.first;
    }
    return a.second > b.second;
  }

};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  vector<pair<ll,ll>> ranl(n), ranr(n);
  for (int i = 0; i < n; i++) {
      ll l, r;  cin >> l >> r;
      ranl[i] = {l, r};
      ranr[i] = {r, l};
  }

  Comp compFunc;
  sort(ranl.begin(), ranl.end(), compFunc);
  sort(ranr.begin(), ranr.end(), compFunc);

  ll ansr = ranr[0].first, ansl = ranl[n-1].first;
  ll ans = ansr - ansl;
  if (ans < 0) ans = 0;

  // Remove the seg with the largest left
  ansl = ranl[n-2].first;
  if (ranl[n-1].first == ranr[0].second && ranl[n-1].second == ranr[0].first) ansr = ranr[1].first;
  else ansr = ranr[0].first;
  ll tmp = ansr - ansl;
  if (tmp < 0) tmp = 0;
  ans = max(ans, tmp);

  // Remove the seg with the smallest right
  ansr = ranr[1].first;
  if (ranr[0].first == ranl[n-1].second && ranr[0].second == ranl[n-1].first) ansl = ranl[n-2].first;
  else ansl = ranl[n-1].first;
  tmp = ansr - ansl;
  if (tmp < 0) tmp = 0;
  ans = max(ans, tmp);

  cout << ans << endl;
  return 0;
}
