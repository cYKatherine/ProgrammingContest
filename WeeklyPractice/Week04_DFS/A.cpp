#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi visited, p;

bool dfs(int s, int t) {
  if (visited[s] == 1) return false;
  visited[s] = 1;
  if (s == t) return true;
  dfs(p[s], t);
}

int main() {
  int n, t;
  cin >> n >> t;

  p.resize(n+5); visited.resize(n+5);
  fill(visited.begin(), visited.end(), 0);
  for(int i = 1; i <= n-1; i++){
    int ai;
    cin >> ai;
    p[i] = ai + i;
  }

  if (dfs(1, t)) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  return 0;
}
