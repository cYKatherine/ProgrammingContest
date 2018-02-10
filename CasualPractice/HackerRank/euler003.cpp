// https://www.hackerrank.com/contests/projecteuler/challenges/euler003
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
vector<ll> prime;

int main() {
    int T;  cin >> T;
    while (T--) {
        ll N;  cin >> N;
        ll ans = 1;
        for (ll i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                ans = i;
                while (N % i == 0) N/=i;
            }
        }

        if (N > 1) {
            ans = max(ans, N);
        }
        cout << ans << endl;
    }
    return 0;
}
