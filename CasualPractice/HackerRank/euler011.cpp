// https://www.hackerrank.com/contests/projecteuler/challenges/euler011
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adj(20, vector<int>(20));
vector<int> x = {0, 1, 2, 3, 0, 0, 0, 0, 0, 1, 2, 3, 0, 1, 2, 3};
vector<int> y = {0, 0, 0, 0, 0, 1, 2, 3, 0, 1, 2, 3, 0, -1, -2, -3};

int main() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cin >> adj[i][j];
        }
    }

    ll ans = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            for (int k = 0; k < 16; k+=4) {
                ll res = 1;
                for (int l = 0; l < 4; l++) {
                    if (i+x[k+l] >= 20 || j+y[k+l] >= 20 || i+x[k+l] < 0 || j+y[k+l] < 0) {
                        res = -1;
                        break;
                    }
                    else {
                        res *= adj[i+x[k+l]][j+y[k+l]];
                    }
                }
                ans = max(res, ans);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
