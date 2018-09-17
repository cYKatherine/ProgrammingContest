#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  int m;  cin >> m;
  vi a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());
  int tmp = 0;
  for (int i = 0; i < n; i++) {
      tmp += a[n-1]-a[i];
  }
  if (tmp > m) {
      cout << a[n-1] << " " << a[n-1]+m << endl;
  }
  else {
      if ((m-tmp)%n == 0) cout << a[n-1]+(m-tmp)/n << " " << a[n-1]+m << endl;
      else cout << a[n-1]+(m-tmp)/n+1 << " " << a[n-1]+m << endl;
  }

  return 0;
}
