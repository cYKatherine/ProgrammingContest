#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,m;
	cin >> n;
	cin >> m;

	int noOfSongs[m + 1];
	int a[n];

	for (int i = 0; i < n; i ++) {
		cin >> a[i];
	}


	for (int i = 0; i < m; i ++) {
		noOfSongs[i] = 0;
	}

	int changed = 0, total = 0;
	int min_band_index = 0, max_band_index = 0;
	int min = 0, max = 0;

	for (int i = 0; i < n; i ++) {
		if (a[i] <= m) {
			noOfSongs[a[i]] += 1;
			if (noOfSongs[a[i]] > max) {
				max = noOfSongs[a[i]];
				max_band_index = i;
			}
			
			if (noOfSongs[a[i]] < min) {
				min = noOfSongs[a[i]];
				min_band_index = i;
			}
		}
		else {
			a[i] = a[min_band_index];
			noOfSongs[a[min_band_index]] += 1;
			min += 1;
		}

		
	}

	int max = total // m;

}
