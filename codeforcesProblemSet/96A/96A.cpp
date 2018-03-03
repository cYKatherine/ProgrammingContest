#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  int count1 = 0, count0 = 0;
  for (int i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
          count0 = 0;
          count1 += 1;
          if (count1 >= 7) {
              cout << "YES" << endl;
              return 0;
          }
      }
      else {
          count1 = 0;
          count0 += 1;
          if (count0 >= 7) {
              cout << "YES" << endl;
              return 0;
          }
      }
  }
  cout << "NO" << endl;

  return 0;
}
