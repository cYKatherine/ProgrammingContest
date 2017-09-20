#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vector<pair<int, int>> t;

bool check(int time, int n) {
    vi visited(10005);
    fill(visited.begin(), visited.end(), 0);
    for (int i = 0; i < n; i++) {
        if (t[i].first-t[i].second<time) return false;
        int used = 0;
        for (int j = t[i].second; j<t[i].first; j++) {
            if (visited[j]==0) {
                used += 1;
                visited[j] = 1;
                if (used == time) break;
            }
        }
        if (used < time) return false;
    }
    return true;
}

int main () {
    int n;  cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;  cin >> x >> y;
        t.push_back({y, x});
    }
    sort(t.begin(), t.end());

    int lo = 0, hi = 10005;
    while (lo != hi-1) {
        int mid = (lo+hi)>>1;
        if (check(mid, n)) lo = mid;
        else hi = mid;
    }
    cout << lo*n << endl;
    return 0;
}
