#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vii;

int n, p = 0, maxLength = 0;
map<string, int> mp;
vii match;

void dfs(int s, int num) {
  if (match[s].size() == 0) {
    if (num > maxLength) maxLength = num;
  }
  for (int i = 0; i < match[s].size(); i++) {
    dfs(match[s][i], num+1);
  }
}

int main(){
  cin >> n >> ws;
  mp["polycarp"] = 0;
  p += 1;
  vi empty;
  match.push_back(empty);

  for(int i = 0; i < n; i++){
    string s, a, b, c;
    getline(cin, s);
    stringstream ss(s);
    ss >> a >> b >> c;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(c.begin(), c.end(), c.begin(), ::tolower);

    mp[a] = p;
    p += 1;
    vi empty;
    match.push_back(empty);

    int f, n;
    f = mp[c];
    n = mp[a];
    match[f].push_back(n);
  }

  dfs(0, 1);
  cout << maxLength << endl;

  return 0;
}
