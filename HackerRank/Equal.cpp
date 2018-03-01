#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll opCount(ll n) {
    ll ans = 0;
    ans += n/5;  n %= 5;
    ans += n/2;  n %= 2;
    ans += n;
    return ans;
}

void do_stuff() {
    int N;  cin >> N;
    vector<ll> choc(N);
    for (int i = 0; i < N; i++) {
        cin >> choc[i];
    }
    sort(choc.begin(), choc.end());
    ll val = INT_MAX;
    for (int i = 0; i <= 4; i++) {
        ll target = choc[0] - i;
        ll ans = 0;
        for (int j = 0; j < N; j++) {
            ans += opCount(choc[j]-target);
        }
        val = min(val, ans);
    }
    cout << val << endl;
}

int main() {
    int T;  cin >> T;

    while (T--) {
        do_stuff();
    }

    return 0;
}
