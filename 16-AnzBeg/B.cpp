#include <iostream>
using namespace std;

int main(){
	int s,v1,v2;
	
	cin >> s;
	cin >> v1;
	cin >> v2;

	if (s % v1 == 0)
		cout << s/v1 << " " << 0 << endl;
	else {
		for (int i = s/v1; i >= 0; i--) {
			if ((s - i*v1) % v2 == 0) {
				cout << i << " " << (s - i * v1) / v2 << endl;
				return 0;
			}
		}
		cout << "Impossible" << endl;
	}

	return 0;
}
