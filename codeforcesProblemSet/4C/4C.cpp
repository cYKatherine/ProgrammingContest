#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll n;  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
      string s;  cin >> s;
      if (!mp.count(s)) {
          cout << "OK" << endl;
          mp[s] = 1;
      }
      else {
          cout << s << mp[s] << endl;
          mp[s]++;
      }
  }

  return 0;
}
