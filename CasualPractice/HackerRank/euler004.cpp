// https://www.hackerrank.com/contests/projecteuler/challenges/euler004
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> v;

int main() {
    int T;  cin >> T;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            ll tmp = i*j;  string s = to_string(tmp);
            bool flag = true;
            for (int k = 0; k <= s.size()/2; k++) {
                if (s[k] != s[s.size()-1-k]) {
                    flag = false;
                }
            }
            if (flag) v.push_back(tmp);
        }
    }
    sort(v.begin(), v.end());

    while (T--) {
        ll N;  cin >> N;
        cout << v[lower_bound(v.begin(), v.end(), N) - v.begin() - 1] << endl;;
    }
    return 0;
}
