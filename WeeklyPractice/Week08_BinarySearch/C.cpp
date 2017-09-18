#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

string s;
int nb, ns, nc, pb, ps, pc;
int bCount = 0, sCount = 0, cCount = 0;
ll r;

bool make_burger(ll n) {
    ll req = 0;
    if (n*bCount-nb >= 0) req += (n*bCount-nb)*pb;
    if (n*sCount-ns >= 0) req += (n*sCount-ns)*ps;
    if (n*cCount-nc >= 0) req += (n*cCount-nc)*pc;
    if (req > r) return false;
    return true;
}

int main() {
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    for (auto& i : s) {
        if (i == 'B') bCount += 1;
        else if (i == 'S') sCount += 1;
        else cCount += 1;
    }

    ll lo = 0, hi = 1e12+500;
    while (lo != hi-1) {
        ll mid = lo + (hi-lo)/2;
        if (make_burger(mid)) lo = mid;
        else hi = mid;
    }
    cout << lo << endl;
    return 0;
}
