#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n;  cin >> n;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n-1; i++) b[i] = abs(a[i+1]-a[i]);
  ll dp[n+5][2];
  ll odd = 0, even = 0, ans = b[0];
  dp[0][0] = b[0];  dp[0][1] = -1*b[0];
  for (int i = 1; i < n-1; i++) {
      dp[i][0] = dp[i-1][1]+b[i];
      dp[i][1] = dp[i-1][0]-b[i];
      if ((i+1)%2==0) even=min(even, dp[i-1][1]);
      else odd=min(odd, dp[i-1][1]);

      if ((i+1)%2==0) ans=max(ans, max(dp[i][0]-even, dp[i][1]-odd));
      else ans=max(ans, max(dp[i][0]-odd, dp[i][1]-even));
  }

  cout << ans << endl;

  return 0;
}
