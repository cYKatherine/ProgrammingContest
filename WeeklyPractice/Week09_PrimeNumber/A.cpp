#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

vector<bool> isprime;
void sieve(int n) {
    isprime.assign(n + 1, 1);  isprime[0] = isprime[1] = 0;
    for (ll i = 2; i * i <= n; ++i) if (isprime[i])
        for (ll j = i * i; j <= n; j += i) isprime[j] = 0;
}

void do_stuff(ll x) {
    int tmp = sqrt(x);
    if (sqrt(x) == tmp && isprime[tmp]) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    sieve(1e7);
    int n;  cin >> n;
    for (int i = 0; i < n; i++) {
        ll x;  cin >> x;
        do_stuff(x);
    }

    return 0;
}
