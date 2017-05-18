#include<iostream>

using namespace std;

int target[60];

void binarySearch(int x) {
	int lo = 1;
	int hi = 50;
	
	
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (x == mid){
			cout << mid << endl;
			return;
		}
		else{
			cout << mid << " ";
			if (x < mid)
				hi = mid - 1;
			else
				lo = mid + 1;
		}
	}
}

int main() {
	int tmp = -1;
	int i = 0;
	while (tmp != 0) {
		cin >> target[i];
		tmp = target[i];
		i += 1;
	}
	
	i = 0;
	tmp = target[i];
	while (tmp != 0) {
		binarySearch(target[i]);
		i += 1;
		tmp = target[i];
	}
	
	return 0;
}
