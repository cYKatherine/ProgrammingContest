#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  vi num;
  for (int i = 0; i < s.size(); i+=2) {
      num.push_back(s[i]-'0');
  }
  sort(num.begin(), num.end());
  for (int i = 0; i < num.size(); i++) {
      cout << num[i] << "+\n"[i==(int)num.size()-1];
  }

  return 0;
}
