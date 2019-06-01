#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, m;  cin >> n >> m;
  vector<ll> a(n), res(m);
  vector<pair<ll, ll>> b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) {
      int tmp;  cin >> tmp;
      b[i] = {tmp, i};
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int i = 0, j = 0;
  while (i < n && j < m) {
      if (a[i] > b[j].first) {
          res[b[j].second] = i;
          j++;
      }
      else i++;
  }
  while (j < m) {
      res[b[j].second] = n;
      j++;
  }

  for (int i = 0; i < m; i++) cout << res[i] << " ";
  cout << endl;

  return 0;
}
