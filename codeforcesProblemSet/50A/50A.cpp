#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int M, N;  cin >> M >> N;
  int tmpM = 0, tmpN = 0;
  tmpM = (M/2)*N;
  if (M % 2 != 0) {
      tmpM += N/2;
  }
  tmpN = (N/2)*M;
  if (N % 2 != 0) {
      tmpN += M/2;
  }
  cout << max(tmpM, tmpN) << endl;
  return 0;
}
