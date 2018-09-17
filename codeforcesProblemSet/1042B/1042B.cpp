#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n;  cin >> n;
  vi A, B, C, AB, AC, BC, ABC;
  for (int i = 0; i < n; i++) {
      int tmp;
      string s;
      cin >> tmp >> s;
      if (s.size() == 3) ABC.push_back(tmp);
      else if (s.size() == 1) {
          if (s == "A") A.push_back(tmp);
          else if (s == "B") B.push_back(tmp);
          else C.push_back(tmp);
      }
      else {
          if (s == "AB" || s == "BA") AB.push_back(tmp);
          else if (s == "AC" || s == "CA") AC.push_back(tmp);
          else BC.push_back(tmp);
      }
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(C.begin(), C.end());
  sort(AB.begin(), AB.end());
  sort(AC.begin(), AC.end());
  sort(BC.begin(), BC.end());
  sort(ABC.begin(), ABC.end());

  if (ABC.size() == 0 && A.size() == 0 && AB.size() == 0 && AC.size() == 0 || ABC.size() == 0 && B.size() == 0 && AB.size() == 0 && BC.size() == 0 || ABC.size() == 0 && C.size() == 0 && BC.size() == 0 && AC.size() == 0) cout << -1 << endl;
  else {
      int ans = 500000;
      if (A.size() != 0 && B.size() != 0 && C.size() != 0) ans = min(A[0]+B[0]+C[0], ans);
      if (A.size() != 0 && BC.size() != 0) ans = min(A[0]+BC[0], ans);
      if (A.size() != 0 && AB.size() != 0 && AC.size() != 0) ans = min(A[0]+AB[0]+AC[0], ans);
      if (B.size() != 0 && AC.size() != 0) ans = min(B[0]+AC[0], ans);
      if (B.size() != 0 && AB.size() != 0 && BC.size() != 0) ans = min(B[0]+AB[0]+BC[0], ans);
      if (C.size() != 0 && AB.size() != 0) ans = min(C[0]+AB[0], ans);
      if (C.size() != 0 && AC.size() != 0 && BC.size() != 0) ans = min(C[0]+AC[0]+BC[0], ans);
      if (ABC.size() != 0) ans = min(ABC[0], ans);
      if (AB.size() != 0 && AC.size() != 0) ans = min(AB[0]+AC[0], ans);
      if (AB.size() != 0 && BC.size() != 0) ans = min(AB[0]+BC[0], ans);
      if (AC.size() != 0 && BC.size() != 0) ans = min(AC[0]+BC[0], ans);

      cout << ans << endl;
  }

  return 0;
}
