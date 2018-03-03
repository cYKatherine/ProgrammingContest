#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, ans = 0, count3 = 0, count2 = 0, count1 = 0;  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
      cin >> s[i];
      if (s[i] == 4) ans += 1;
      else if (s[i] == 3) count3 += 1;
      else if (s[i] == 2) count2 += 1;
      else count1 += 1;
  }
  ans += count2/2;
  count2 -= count2/2*2;
  if (count3 <= count1) {
      ans += count3;
      count1 -= count3;

      if (count2*2 <= count1) {
          ans += count2;
          count1 -= count2*2;

          ans += count1/4;
          if (count1%4!=0) ans += 1;
      }
      else {
          ans += count2/2;
          if (count2%2!=0) ans += 1;
      }
  }
  else {
      ans += count2;
      ans += count3;
  }

  cout << ans << endl;

  return 0;
}
