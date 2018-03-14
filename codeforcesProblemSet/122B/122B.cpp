#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  int four = 0, seven = 0;
  for (int i = 0; i < s.size(); i++) {
      if (s[i] == '4') four += 1;
      else if (s[i] == '7') seven += 1;
  }
  if (four == 0 && seven == 0) cout << -1 << endl;
  else if (four >= seven) cout << 4 << endl;
  else cout << 7 << endl;
  return 0;
}
