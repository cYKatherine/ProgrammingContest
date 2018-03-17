#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int c1, c2, c3, c4, c5;  cin >> c1 >> c2 >> c3 >> c4 >> c5;
  int sum = c1+c2+c3+c4+c5;
  if (sum == 0 || sum % 5 != 0) cout << -1 << endl;
  else cout << sum/5 << endl;

  return 0;
}
