#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vi height(n);
  for (int i = 0; i < n; i++) {
      cin >> height[i];
  }

  int ans = 0, pre = height[0], current = 0;
  vi memo(n);
  for (int i = 0; i < n; i++) {
      if (height[i] >= pre) {
          memo[i] = current;
          current += 1;
          pre = height[i];
      }
      else {
          pre = height[i];
          memo[i] = 0;
          current = 1;
      }
  }

  pre = height[n-1], current = 0;
  for (int i = n-1; i >= 0; i--) {
      if (height[i] >= pre) {
          memo[i] += current;
          current += 1;
          pre = height[i];
      }
      else {
          pre = height[i];
          current = 1;
      }
  }

  for (auto &x : memo) ans = max(x, ans);
  cout << ans+1 << endl;

  return 0;
}
