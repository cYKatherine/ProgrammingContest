#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int w;  cin >> w;
  if (w == 2) {
      cout << "NO" << endl;
  }
  else if (w%2 == 0 && (w-2)%2==0) {
      cout << "YES" << endl;
  }
  else {
      cout << "NO" << endl;
  }
  return 0;
}
