#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

vi a(1e5+5), position(1e5+5);
vector<pair<int, int>> ans;
vector<bool> isprime;

void sieve(int n) {
    isprime.assign(n + 1, 1);  isprime[0] = isprime[1] = 0;
    for (int i = 2; i * i <= n; ++i) if (isprime[i])
        for (int j = i * i; j <= n; j += i) isprime[j] = 0;
}

int main() {
    sieve(1e5+5);
    int n;  cin >> n;
    fill(a.begin(), a.end(), 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        position[a[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        while (a[i] != i) {
            int pos = position[i];
            int prime = pos-i+1;
            while (!isprime[prime]) prime--;
            int index = pos - prime + 1;

            int tmp;

            tmp = position[a[pos]];
            position[a[pos]] = position[a[index]];
            position[a[index]] = tmp;

            // Swap a[pos] and a[index]
            tmp = a[pos];
            a[pos] = a[index];
            a[index] = tmp;
            ans.push_back({index, pos});
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}
