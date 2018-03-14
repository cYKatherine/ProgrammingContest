#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vector<int> num = {4, 7, 44, 77, 47, 74, 444, 777, 477, 447, 474, 744, 747, 774};

  for (int i = 0; i < 14; i++) {
      if (n % num[i] == 0) {
          cout << "YES" << endl;
          return 0;
      }
  }
  cout << "NO" << endl;

  return 0;
}
