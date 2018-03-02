#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void doStuff() {
    ll N;  cin >> N;
    vector<ll> B(N+5);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    // dp[i][j]
    // j==0 => A[i] = 1
    // j==1 => A[i] = B[i]
    ll dp[N+5][2];
    dp[0][0] = 0;
    dp[0][1] = 0;
    for (int i = 1; i < N; i++) {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]+(B[i-1]-1));
        dp[i][1] = max(dp[i-1][0] + (B[i]-1), dp[i-1][1] + abs(B[i]-B[i-1]));
    }
    cout << max(dp[N-1][0], dp[N-1][1]) << endl;
}

int main () {
    int T;  cin >> T;
    while (T--) {
        doStuff();
    }
    return 0;
}
