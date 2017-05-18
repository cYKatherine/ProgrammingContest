#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    map<string, string> mp;

    string str;
    while(getline(cin, str)) {
        if (str.empty()) break;

        stringstream ss(str);
        string a, b;
        ss >> a >> b;
        mp[b] = a;
    }

    while (getline(cin, str)) {
        if (mp.count(str) == 0) cout << "eh" << endl;
        else cout << mp[str] << endl;
    }

    return 0;
}
