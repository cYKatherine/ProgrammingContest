// https://www.hackerrank.com/contests/projecteuler/challenges/euler008
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int T;  cin >> T;
    while (T--) {
        ll N, K;  cin >> N >> K;
        ll ans = -1;
        string s;  cin >> s;
        for (int i = 0; i < N-K; i++) {
            ll product = 1;
            for (int j = i; j < i+K; j++) {
                ll num = s[j] - '0';
                product *= num;
            }
            ans = max(ans, product);
        }
        cout << ans << endl;
    }
    return 0;
}
