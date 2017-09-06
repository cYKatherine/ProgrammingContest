#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long long ll;

vi prime;

template<typename T> struct Dinics {
    struct edge { int to; T flow, cap; };  T INF = numeric_limits<T>::max();
    int n, m; vi dist, work; queue<int> q;  vector<edge> edges; vvi adj;
    bool bfs(int s, int t) {
        dist.assign(n, -1);
        dist[s] = 0;
        q.push(s);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (auto & i : adj[u]) {
                edge& e  = edges[i];  int v = e.to;
                if (dist[v] < 0 && e.flow < e.cap) dist[v] = dist[u] + 1, q.push(v);
            }
        }
        return dist[t] >= 0;
    }
    T dfs(int u, int t, T f) {
        if (u == t) return f;
        for (int & i = work[u]; i < (int)adj[u].size(); i++) {
            auto& e = edges[adj[u][i]], &rev = edges[adj[u][i]^1];
            if (e.flow < e.cap && dist[e.to] == dist[u] + 1) {
                T df = dfs(e.to, t, min(f, e.cap-e.flow));
                if (df > 0) { e.flow += df; rev.flow -= df; return df;}
            }
        }
        return 0;
    }
    // Create a flow network with n nodes -- add edges with add_edge(u,v,cap)
    Dinics(int n) : n(n), m(0), adj(n) { }
    int add_edge(int from, int to, T cap) { // add an edge (from -> to) with
        adj[from].push_back(m++), adj[to].push_back(m++); // capacity of cap units.
        edges.push_back({to, 0, cap}), edges.push_back({from, 0, 0});
        return m - 2; // Change {from,0,0} to {from,0,cap} for bidirectional edges
    }
    edge& get_edge(int i) { return edges[i]; } // get a reference to the i’th edge
    T max_flow(int s, int t) { // find the maximum flow from s to t
        T res = 0; for (auto& e : edges) e.flow = 0;
        while (work.assign(n, 0), bfs(s, t))
            while (T delta = dfs(s, t, INF)) res += delta;
        return res;
    }
};

int division(int n, int p) {
    int count = 0;
    while (n % p == 0 && n > 0) {
        count += 1;
        n /= p;
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vi a(n+5);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // Find prime numbers
    int tmp[1000000];
    for (int i = 2; i*i<1000000; i++) {
        if (tmp[i]) continue;
        for (int j = i; j <= 1000000/i; j++) tmp[i*j] = 1;
    }
    for (int i = 2; i < 100000; i++) {
        if (!tmp[i]) prime.push_back(i);
    }
    vector<pair<int, int>> good_pair;
    for (int i = 0; i < m; i++) {
        int ik, jk;
        cin >> ik >> jk;
        good_pair.push_back({ik, jk});
    }

    ll result = 0;

    for (auto& p : prime) {
        Dinics<long long> mf(n+2);
        vi visited(n+2);
        for (auto& gp : good_pair) {
            int n, m, even, odd;
            if (gp.first % 2 == 0) {
                even = gp.first;
                odd = gp.second;
            }
            else {
                even = gp.second;
                odd = gp.first;
            }
            n = division(a[odd], p);
            m = division(a[even], p);
            if (a[odd] < p && a[even] < p) {
                cout << result << endl;
                return 0;
            }
            if (!visited[odd]) {
                mf.add_edge(0, odd+1, n);
                visited[odd] = 1;
            }
            if (!visited[even]) {
                mf.add_edge(even+1, 1, m);
                visited[even] = 1;
            }
            mf.add_edge(odd+1, even+1, min(n, m));
        }
        // for (auto& e : mf.edges) {
        //     cout << e.cap << " ";
        // }
        // cout << mf.max_flow(0, 1) << endl;;
        result += mf.max_flow(0, 1);
    }

    cout << result << endl;
    return 0;
}
