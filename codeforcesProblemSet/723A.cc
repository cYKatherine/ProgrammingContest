#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;

	int x,y,z;
	x = abs(b - a) + abs(c - a);
	y = abs(a - b) + abs(c - b);
	z = abs(a - c) + abs(b - c);

	if (x < y && x < z) 
		cout << x << endl;
	else if (y < x && y < z)
		cout << y << endl;
	else
		cout << z << endl;

	return 0;
}
