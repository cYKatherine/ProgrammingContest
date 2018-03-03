#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string a, b;  cin >> a >> b;
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(b.begin(), b.end(), b.begin(), ::tolower);

  for (int i = 0; i < a.size(); i++) {
      if (a[i] < b[i]) {
          cout << -1 << endl;
          return 0;
      }
      else if (a[i] > b[i]) {
          cout << 1 << endl;
          return 0;
      }
  }
  cout << 0 << endl;
  return 0;
}
