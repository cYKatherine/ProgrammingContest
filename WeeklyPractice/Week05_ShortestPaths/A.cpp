#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int n, m;

int main() {
    cin >> n >> m;
    vector<vector<pair<ll, int>>> al(n+5);
    vector<ll> dist(n+5);
    vi result(n+5);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    fill(dist.begin(), dist.end(), -1);
    fill(result.begin(), result.end(), -1);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        al[u].push_back(make_pair(w, v));
        al[v].push_back(make_pair(w, u));
    }

    dist[1] = 0;
    pq.push(make_pair(0, 1));
    while (!pq.empty()) {
        pair<ll, int> top = pq.top();
        int d = top.first, t = top.second;
        pq.pop();
        if (d > dist[t] && dist[t] != -1) {
            continue;
        }
        for (pair<ll, int> adjacent: al[t]) {
            int u = adjacent.second;
            ll w = adjacent.first;
            if (dist[u] != -1 && dist[t] + w >= dist[u]) continue;
            dist[u] = dist[t] + w;
            result[u] = t;
            pq.push(make_pair(dist[u], u));
        }
    }

    // for(int i = 0; i < result.size(); i++) {
    //     cout << result[i];
    // }
    // cout << endl;

    if (result[n] == -1) cout << -1 << endl;
    else {
        int pre = n;
        vi final;
        while (pre != 1) {
            final.push_back(pre);
            pre = result[pre];
        }
        cout << 1;
        for (int i = final.size()-1; i >= 0; i--) {
            cout << " " << final[i];
        }
        cout << endl;
    }
    return 0;
}
