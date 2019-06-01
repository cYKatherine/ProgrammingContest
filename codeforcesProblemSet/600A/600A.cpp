#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    string s;  cin >> s;
    vector<string> a, b;

    bool num = true;
    string tmp = "";
    for (auto& t : s) {
        if (t == ';' || t == ',') {
            if (num && tmp == "") num = false;
            if (num && !(tmp.size() > 1 && tmp[0] == '0')) {
                a.push_back(tmp);
            }
            else b.push_back(tmp);
            num = true;
            tmp = "";
        }
        else if (t >= 48 && t <= 57){
            tmp += t;
        }
        else {
            if (num) num = false;
            tmp += t;
        }
    }
    if (num && tmp != "" && !(tmp.size() > 1 && tmp[0] == '0')) a.push_back(tmp);
    else b.push_back(tmp);

    if (a.empty()) {
        cout << "-" << endl;
    }
    else {
        cout << "\"";
        string delim = "";
        for (auto& t : a) {
            cout << delim << t;
            delim = ",";
        }
        cout << "\"" << endl;
    }
    if (b.empty()) {
        cout << "-" << endl;
    }
    else {
        cout << "\"";
        string delim = "";
        for (auto& t : b) {
            cout << delim << t;
            delim = ",";
        }
        cout << "\"" << endl;

    }
    return 0;
}
