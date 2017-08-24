#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> visited(10005), dist(10005);

int main() {
    cin >> n >> m;
    queue<int> q;

    fill(dist.begin(), dist.end(), -1);
    fill(visited.begin(), visited.end(), 0);

    dist[n] = 0;
    visited[n] = 1;
    q.push(n);

    while (!q.empty()) {
        int t = q.front();
        q.pop();
        if (t == m) {
            cout << dist[t] << endl;
            return 0;
        }
        int u1 = t*2, u2 = t-1;
        if (u1 < 10005 && visited[u1] == 0) {
            dist[u1] = dist[t] + 1;
            visited[u1] = 1;
            q.push(u1);
        }
        if (u2 > 0) {
            if (visited[u2] == 0) {
                dist[u2] = dist[t] + 1;
                visited[u2] = 1;
                q.push(u2);
            }
        }
    }

    return 0;
}
