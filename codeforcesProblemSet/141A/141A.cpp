#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<int> a(26, 0), b(26, 0);
  string guest, host, pile;  cin >> guest >> host >> pile;
  for (int i = 0; i < guest.size(); i++) {
      a[guest[i]-'A'] += 1;
  }
  for (int i = 0; i < host.size(); i++) {
      a[host[i]-'A'] += 1;
  }
  for (int i = 0; i < pile.size(); i++) {
      b[pile[i]-'A'] += 1;
  }
  for (int i = 0; i < 26; i++) {
      if (a[i] != b[i]) {
          cout << "NO" << endl;
          return 0;
      }
  }
  cout << "YES" << endl;

  return 0;
}
