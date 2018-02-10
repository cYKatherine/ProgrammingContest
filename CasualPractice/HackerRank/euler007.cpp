// https://www.hackerrank.com/contests/projecteuler/challenges/euler007
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> p;
int main() {
    ll T;  cin >> T;
    p.push_back(2);
    for (ll i = 3; p.size() <= 1e4; i++) {
        bool is_prime = true;
        for (auto& x: p) {
            if (i % x == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) p.push_back(i);
    }
    while (T--) {
        ll N;  cin >> N;
        cout << p[N-1] << endl;
    }
    return 0;
}
