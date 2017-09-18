#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<bool, ll> pbl;
typedef vector<int> vi;
typedef vector<vi> vvi;

vi a;

pbl check(ll k, int S, int n) {
    vector<ll> b;
    for (int i = 1; i <= n; i++) b.push_back(a[i]+i*k);
    sort(b.begin(), b.end());
    ll total = 0;
    for (int i = 0; i < k; i++) total += b[i];
    return {S >= total, total};
}

int main() {
    int n, S;  cin >> n >> S;
    a.resize(n+5);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int lo = 0, hi = n+1;
    ll ans = 0;
    while (lo != hi-1) {
        ll mid = lo+(hi-lo)/2;
        pbl _check = check(mid, S, n);
        if (_check.first) {
            lo = mid;
            ans = _check.second;
        }
        else {
            hi = mid;
        }
    }
    cout << lo << " " << ans << endl;
    return 0;
}
