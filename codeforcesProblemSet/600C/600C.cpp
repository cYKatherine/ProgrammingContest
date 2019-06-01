#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string s;  cin >> s;
  vector<int> tmp(26, 0);
  for (auto& t : s) tmp[t-'a']++;

  vector<int> tmpp;
  for (int i = 0; i < 26; i++) {
      if (tmp[i] % 2 != 0) tmpp.push_back(i);
  }
  int k = tmpp.size();
  for (int i = 0; i < k/2; i++) {
      tmp[tmpp[i]]++;
      tmp[tmpp[k-i-1]]--;
  }

  int odd = -1;
  if (k > 0 && k % 2 != 0) odd = tmpp[k/2];

  string res = "";
  if (odd != -1) {
      res = (char)(97+odd);
      tmp[odd]--;
  }
  for (int i = 25; i >= 0; i--) {
      if (tmp[i] != 0 && tmp[i] % 2 == 0) {
          for (int j = 0; j < tmp[i]/2; j++) {
              res = (char)(97+i) + res;
          }
          for (int j = 0; j < tmp[i]/2; j++) {
              res+=(char)(97+i);
          }
      }
  }
  cout << res << endl;

  return 0;
}
