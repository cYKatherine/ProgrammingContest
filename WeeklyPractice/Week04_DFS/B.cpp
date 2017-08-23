#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> cb;
int n, m;

void dfs(int i, int j, char c) {
  if (cb[i][j] == '-') return;
  if (cb[i][j] == 'B' || cb[i][j] == 'W') return;
  cb[i][j] = c;
  char nc;
  if (c=='B') nc = 'W';
  else nc = 'B';
  if (i-1 >= 0){
    if (cb[i-1][j] != 'B' && cb[i-1][j] != 'W') dfs(i-1, j, nc);
  }
  if (j-1 >= 0){
    if (cb[i][j-1] != 'B' && cb[i][j-1] != 'W') dfs(i, j-1, nc);
  }
  if (i+1 < n){
    if (cb[i+1][j] != 'B' && cb[i+1][j] != 'W') dfs(i+1, j, nc);
  }
  if (j+1 < m){
    if (cb[i][j+1] != 'B' && cb[i][j+1] != 'W') dfs(i, j+1, nc);
  }
  else return;
}

int main(){
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    vector<char> tmp;
    string ss;
    cin >> ss;
    for(int j = 0; j < m; j++){
      tmp.push_back(ss[j]);
    }
    cb.push_back(tmp);
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if (cb[i][j] != 'B' && cb[i][j] != 'W'){
	dfs(i, j, 'B');
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << cb[i][j];
    }
    cout << endl;
  }

  return 0;
}
