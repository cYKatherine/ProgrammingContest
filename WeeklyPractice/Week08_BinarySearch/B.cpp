#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vi a;

int main() {
    int n, l;  cin >> n >> l;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int _max = -1;
    for (int i = 1; i < n; i++) _max = max(_max, a[i]-a[i-1]);

    if (a[0] != 0) _max = max(_max, 2*a[0]);
    if (a[n-1] != l) _max = max(_max, 2*(l-a[n-1]));

    cout << fixed << setprecision(10) << _max/2.0 << endl;
    return 0;
}
