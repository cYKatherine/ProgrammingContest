// https://www.hackerrank.com/contests/projecteuler/challenges/euler009
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> v(3000);

int main() {
    ll T;  cin >> T;
    fill(v.begin(), v.end(), -1);

    for (ll a = 1; a < 3000; a++) {
        for (ll b = 1; b < 3000; b++) {
            ll cc = a*a+b*b;
            if (sqrt(cc) == (int)(sqrt(cc))) {
                ll c = sqrt(cc);
                ll sum = a+b+c;
                if (sum <= 3000) {
                    v[sum] = max(v[sum], a*b*c);
                }
            }
        }
    }

    while (T--) {
        ll N;  cin >> N;
        cout << v[N] << endl;
    }
    return 0;
}
