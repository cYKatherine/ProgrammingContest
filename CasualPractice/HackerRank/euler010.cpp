// https://www.hackerrank.com/contests/projecteuler/challenges/euler010
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> p;
vector<ll> sum;

int main() {
    int T;  cin >> T;
    vector<bool> isPrime(1e6+5, true);
    for (ll i=2;i*i<=1e6;i++) {
        if (isPrime[i]) {
            for (ll j=i*i;j<=1e6;j+=i) isPrime[j] = false;
        }
    }
    p.push_back(2);  sum.push_back(2);
    for (int i = 3; i<=1e6; i++) {
        if (isPrime[i]) {
            p.push_back(i);
            sum.push_back(i+sum[sum.size()-1]);
        }
    }

    while (T--) {
        ll N;  cin >> N;
        ll low = lower_bound(p.begin(), p.end(), N)-p.begin();
        if (p[low] == N) {
            cout << sum[low] << endl;;
        }
        else {
            cout << sum[low-1] << endl;
        }
    }
    return 0;
}
