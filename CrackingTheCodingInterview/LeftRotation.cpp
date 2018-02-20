#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, d;  cin >> n >> d;
    vector<ll> num;
    for (int i = 0; i < n; i++) {
        ll tmp;  cin >> tmp;
        num.push_back(tmp);
    }

    for (int i = d; i < n; i++) {
        cout << num[i] << " ";
    }

    for (int i = 0; i < d; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
