#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int n, m;
int am[405][405];
vi dist;

int main() {
    cin >> n >> m;
    for (int i = 0; i < 405; i++) {
        for (int j = 0; j < 405; j++) {
            am[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        am[a][b] = 1;
        am[b][a] = 1;
    }

    queue<int> q;
    dist.resize(n+5);
    fill(dist.begin(), dist.end(), -1);

    dist[1] = 0;
    q.push(1);
    int c = 1;
    if (am[1][n] == 1) c = 0;

    while(!q.empty()) {
        int t = q.front();
        q.pop();
        for (int u = 1; u <= n; u++) {
            if (am[t][u] != c) continue;
            if(dist[u] == -1) {
                dist[u] = dist[t] + 1;
                q.push(u);
            }
        }
    }

    cout << dist[n] << endl;

    return 0;
}
