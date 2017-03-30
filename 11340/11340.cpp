#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k >> ws;
        map<char, int> mymap;
        string line;
        for (int j = 0; j < k; j++) {
            getline(cin, line);
            stringstream ss(line);
            char key;
            int value;
            ss >> key >> value;
            mymap[key] = value;
        }

        int m, total;
        total = 0;
        cin >> m >> ws;
        for (int j = 0; j < m; j++) {
            getline(cin, line);
            for (int q = 0; q < (int)line.size(); q++) {
                if (mymap.count(line[q]) != 0) total += mymap[line[q]];
            }
        }

        cout << fixed;
        cout << setprecision(2) << (double) total/100.00 << "$" << endl;
    }

    return 0;
}
