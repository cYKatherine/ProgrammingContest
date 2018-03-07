#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  set<char> s;
  char c;
  while(cin >> c) {
      if (isalpha(c)) {
          s.insert(c);
      }
  }
  cout << s.size() << endl;

  return 0;
}
