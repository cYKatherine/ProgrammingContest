#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
    int n, m;  cin >> n >> m;
    vector<int> coins(m);
    vector<ll> memo(n+5);
    fill(memo.begin(), memo.end(), 0);
    memo[0] = 1;

    for (int i = 0; i < m; i++) {
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());

    for (int i = 0; i < m; i++) {
        for (int j = coins[i]; j <= n; j++) {
            memo[j] += memo[j-coins[i]];
        }
    }

    cout << memo[n] << endl;

    return 0;
}
