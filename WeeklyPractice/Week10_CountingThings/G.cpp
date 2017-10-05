#include <bits/stdc++.h>
#define FOR(i,s,n) for(int i(s); i<n; ++i)

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;

const int MOD = 1e9+7;

int memo[105][2605];

void _add(int& a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}

int dp(int i, int j) {
    if (i == 1 && j <= 26) return memo[i][j] = 1;
    if (memo[i][j] != -1) return memo[i][j];
    int ans = 0;
    for (int k = 1; k <= 26; k++) {
        if (j-k <= 0) break;
        _add(ans, dp(i-1, j-k));
    }
    // cout << "memo[" << i << "][" << j << "] = " << ans << endl;
    return memo[i][j] = ans % MOD;
}

void do_stuff() {
    string s;  cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        count += s[i] - 'a' + 1;
    }
    if (memo[s.size()][count] == -1) {
        dp(s.size(), count);
    }
    cout << memo[s.size()][count] - 1 << endl;
}

int main() {
    int t;  cin >> t;

    FOR(i, 0, 105) {
        FOR(j, 0, 2605) {
            if (j > 26*i) memo[i][j] = 0;
            else memo[i][j] = -1;
        }
    }

    for (int i = 0; i < t; i++) {
        do_stuff();
    }
    return 0;
}
