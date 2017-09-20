#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int _max = 0;
vi a;

int main() {
    int n;  cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;  cin >> tmp;
        _max = max(_max, tmp);
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());

    n = unique(a.begin(), a.end()) - a.begin();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 2*a[i]; j <= _max+a[i]; j += a[i]) {
            int pos = lower_bound(a.begin(), a.end(), j) - a.begin();
            if (pos != 1 && a[pos-1] > a[i]) ans = max(ans, a[pos-1]%a[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
