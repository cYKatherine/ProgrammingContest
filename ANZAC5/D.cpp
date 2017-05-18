#include<iostream>

using namespace std;

int xList[10000000];
int yList[10000000];

int findPoint(int sum) {
	if (sum <= 20 * 20)
		return 10;
	else if (sum <= 40 * 40)
		return 9;
	else if (sum <= 60 * 60)
		return 8;
	else if (sum <= 80 * 80)
		return 7;
	else if (sum <= 100 * 100)
		return 6;
	else if (sum <= 120 * 120)
		return 5;
	else if (sum <= 140 * 140)
		return 4;
	else if (sum <= 160 * 160)
		return 3;
	else if (sum <= 180 * 180)
		return 2;
	else if (sum <= 200 * 200)
		return 1;
	else 
		return 0;
}

int main() {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		
		for (int i = 0; i < n; i++) {
			int x,y;
			cin >> x;
			cin >> y;
			
			xList[i] = x;
			yList[i] = y;
		}
		
		int point = 0;
		for (int i = 0; i < n; i++) {
			int x,y,sum;
			x = xList[i];
			y = yList[i];
			
			sum = x * x + y * y;
			point += findPoint(sum);
			
		}
		
		cout << point << endl;
	}
	
	
	return 0;
}
