#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  string hello = "hello";
  int tmp = 0;
  for (int i = 0; i < s.size(); i++) {
      if (s[i] == hello[tmp]) {
          tmp += 1;
          if (tmp == 5) {
              cout << "YES" << endl;
              return 0;
          }
      }
  }
  cout << "NO" << endl;

  return 0;
}
