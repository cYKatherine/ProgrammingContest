// https://www.hackerrank.com/contests/projecteuler/challenges/euler012
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> num;
vector<ll> divNum;
vector<ll> p;

ll countFactors(ll n) {
    ll currentN = n;
    ll factors = 1;
    for (int i = 0; p[i]*p[i] <= n; i++) {
        int power = 0;
        while (currentN % p[i] == 0) {
            currentN /= p[i];
            power++;
        }
        factors *= power + 1;
    }
    if (currentN > 1) {
        factors *= 2;
    }
    return factors;
}

int main() {
    int T;  cin >> T;

    // Find primes
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

    ll triNum = 0, i = 1, res = 0;
    while (res <= 1e3) {
        triNum += i;
        i += 1;

        res = countFactors(triNum);
        num.push_back(triNum);
        divNum.push_back(res);
    }

    while (T--) {
        int N;  cin >> N;
        // cout << num[lower_bound(divNum.begin(), divNum.end(), N+1)-divNum.begin()] << endl;;
        for (int i = 0; i < divNum.size(); i++) {
            if (divNum[i] > N) {
                cout << num[i] << endl;
                break;
            }
        }
    }
    return 0;
}
