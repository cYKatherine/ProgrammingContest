#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n, k; cin >> n >> k;
  string t; cin >> t;

  vector<int> start;
  for (int i = 1; i < n; i++) {
      if (t[i] == t[0]) start.push_back(i);
  }

  if (start.size() == 0) {
      for (int i = 0; i < k; i++) cout << t;
      cout << endl;
      return 0;
  }

  for (auto&x : start) {
      bool flag = true;
      for (int i = 0; i < n-x; i++) {
          if (t[i] != t[x+i]) {
              flag = false;
              break;
          }
      }
      if (flag) {
          cout << t;
          for (int i = 0; i < k-1; i++) {
              cout << t.substr(n-x,x);
          }
          cout << endl;
          return 0;
      }
  }
  for (int i = 0; i < k; i++) cout << t;
  cout << endl;

  return 0;
}
