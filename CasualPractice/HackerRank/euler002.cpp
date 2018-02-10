// https://www.hackerrank.com/contests/projecteuler/challenges/euler002
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> num;

int main() {
    ll T; cin >> T;
    num = {1, 2};
    for (int i = 0; i < 90; i++) {
        num.push_back(num[i] + num[i+1]);
    }

    while (T--) {
        ll n;  cin >> n;
        ll sum; sum = 0;
        int index = lower_bound(num.begin(), num.end(), n)-num.begin();
        for (int i = 1; i < index; i+=3) {
            sum += num[i];
        }
        cout << sum << endl;
    }
    return 0;
}
