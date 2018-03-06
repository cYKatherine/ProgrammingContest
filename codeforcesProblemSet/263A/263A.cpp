#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<vi> matrix(6, vi(6));
  for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= 5; j++) {
          cin >> matrix[i][j];
          if (matrix[i][j] == 1) {
              cout << abs(i-3) + abs(j-3) << endl;
              return 0;
          }
      }
  }

  return 0;
}
