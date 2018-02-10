// https://www.hackerrank.com/contests/projecteuler/challenges/euler005
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(int start, int end) {
    if (end-start <= 1) {
        return start*end/(gcd(start, end));
    }
    else {
        ll new_end = lcm(start+1, end);
        return start*new_end/gcd(start, new_end);
    }
}

int main() {
    int T;  cin >> T;

    while (T--) {
        int N;  cin >> N;
        cout << lcm(1, N) << endl;
    }
    return 0;
}
