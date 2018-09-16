#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  ll minn = -1, maxx = 0;
  for (int i = 0; i < n; i++) {
      ll tmp;  cin >> tmp;
      if (minn == -1) minn = tmp;
      else minn = min(minn, tmp);

      maxx = max(maxx, tmp);
  }

  cout << maxx-minn+1-n << endl;

  return 0;
}
