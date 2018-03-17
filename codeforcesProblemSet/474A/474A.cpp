#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  vector<int> a(127, -1);
  for (int i = 0; i < keyboard.size(); i++) {
      a[keyboard[i]] = i;
  }
  char d;  cin >> d;
  string s;  cin >> s;
  for (int i = 0; i < s.size(); i++) {
      if (d == 'L') cout << keyboard[a[s[i]]+1];
      else cout << keyboard[a[s[i]]-1];
  }
  cout << endl;

  return 0;
}
