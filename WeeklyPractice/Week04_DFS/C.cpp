#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi manager, visited;
int n, number = 0;

int dfs(int s) {
  visited[s] = 1;
  if (manager[s] == -1){
    return 1;
  }
  return dfs(manager[s]) + 1;
}

int main(){
  cin >> n;

  manager.resize(n+5); visited.resize(n+5);
  for(int i = 1; i <= n; i++){
    cin >> manager[i];
  }

  fill(visited.begin(), visited.end(), 0);

  for(int i = 1; i <= n; i++){
    if(visited[i] != 0) continue;
    else {
      int tmp = dfs(i);
      if (tmp > number) number = tmp;
    }
  }

  cout << number << endl;
  
  return 0;
}
