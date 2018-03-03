#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, ans = 0;  cin >> n;
  for (int i = 0; i < n; i++) {
      int a, b, c;
      cin >> a >> b >> c;
      if (a+b+c >= 2) ans += 1;
  }

  cout << ans << endl;
  return 0;
}
