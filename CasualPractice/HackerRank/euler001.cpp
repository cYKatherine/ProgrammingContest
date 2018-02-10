// https://www.hackerrank.com/contests/projecteuler/challenges/euler001
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll sum(ll n) {
    return (1 + n) * n / 2;
}

int main() {
    ll T;  cin >> T;
    while (T--) {
        ll n;  cin >> n;
        ll a, b, c, ans;
        a = (n-1) / 3;  b = (n-1) / 5;  c = (n-1) / 15;
        ans = sum(a)*3 + sum(b)*5 - sum(c)*15;
        cout << ans << endl;
    }

    return 0;
}

