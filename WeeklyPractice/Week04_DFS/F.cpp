#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<pair<int, int>>> vii;

int n, m, T;
string maxx = "";
vi visited;
vii al;

void dfs(int i, string cur, int time) {
    if (i == n) {
        if (cur.size() > maxx.size()) maxx = cur;
        return;
    }
    else {
        for (int k = 0; k < al[i].size(); k++) {
            int nextTime = al[i][k].second + time;
            int next = al[i][k].first;
            string nextString = cur + to_string(next);
            if (nextTime <= T) {
                dfs(next, nextString, nextTime);
            }
            else return;
        }
    }
}

int main() {
    cin >> n >> m >> T;
    al.resize(n+5);
    visited.resize(n+5);
    fill(visited.begin(), visited.end(), -1);
    for (int i = 0; i < m; i++) {
        int f, n, w;
        cin >> f >> n >> w;
        al[f].push_back(make_pair(n, w));
        al[n].push_back(make_pair(f, w));
    }

    dfs(1, "1", 0);

    cout << maxx.size() << endl;
    for (int i = 0; i < maxx.size(); i++) cout << maxx[i] << " ";
    cout << endl;

    return 0;
}
