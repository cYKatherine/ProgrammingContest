// https://www.hackerrank.com/contests/projecteuler/challenges/euler006

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int T;  cin >> T;
    while (T--) {
        ll N;  cin >> N;
        ll a = (1 + N) * N / 2, b = N * (N + 1) * (2 * N + 1) / 6;
        ll ans = abs(a*a - b);
        cout << ans << endl;
    }
    return 0;
}
