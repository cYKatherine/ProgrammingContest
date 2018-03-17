#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n, zero = 0, one = 0;  cin >> n;
  string s;  cin >> s;
  for (int i = 0; i < n; i++) {
      if (s[i] == '0') zero += 1;
      else if (s[i] == '1') one += 1;
  }
  cout << abs(zero-one) << endl;

  return 0;
}
