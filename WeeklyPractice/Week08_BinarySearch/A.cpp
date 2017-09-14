#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vi a(100005);

int bs(int t, int n) {
    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (a[mid] == t) return mid;
        else if (a[mid] > t) hi = mid;
        else lo = mid+1;
    }
    return hi;
}

int main() {
    int n;  cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        int tmp;  cin >> tmp;
        a[i] = a[i-1] + tmp;
    }
    int m;  cin >> m;
    for (int i = 1; i <= m; i++) {
        int t;  cin >> t;
        cout << bs(t, n) << endl;
    }
    return 0;
}
