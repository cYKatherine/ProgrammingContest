#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vii;

int n, m;
bool okay = true;
vi visited, one, two;
vii al;

void dfs(int i, int group) {
    if (visited[i] != -1) {
        if (visited[i] != group) okay = false;
        return;
    }
    if (al[i].size() == 0) return;

    int nextGroup;
    if (group == 1) {
        nextGroup = 2;
        one.push_back(i);
    }
    else {
        nextGroup = 1;
        two.push_back(i);
    }
    visited[i] = group;
    for (int j = 0; j < al[i].size(); j++) {
        dfs(al[i][j], nextGroup);
    }
}

int main() {
    cin >> n >> m;
    al.resize(n+5);
    visited.resize(n+5);
    fill(visited.begin(), visited.end(), -1);

    for (int i = 0; i < m; i++) {
        int f, n;
        cin >> f >> n;
        al[f].push_back(n);
        al[n].push_back(f);
    }

    for (int i = 1; i <= n; i++) {
        if (okay) {
            if (visited[i] == -1) {
                dfs(i, 1);
            }
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << one.size() << endl;
    for (int i = 0; i < one.size(); i++) {
        cout << one[i] << " ";
    }
    cout << endl;

    cout << two.size() << endl;
    for (int i = 0; i < two.size(); i++) {
        cout << two[i] << " ";
    }
    cout << endl;

    return 0;
}
