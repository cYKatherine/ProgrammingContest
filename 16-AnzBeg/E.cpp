#include<iostream>
using namespace std;

int ranks [1000111];

int main() {
	int n;
	cin >> n;


	for (int i = 0; i < n; i ++) {
		int tmp;
		cin >> tmp;
		ranks[i] = tmp; 
	}

	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i+1; j < n; j++) {
			if (ranks[j] < ranks[min])
				min = j;
		}
		swap(ranks[i],ranks[min]);
	}	

	int max = ranks[0] + ranks[n-1];
	for (int i = 0; i < n/2; i++) {
		if (ranks[i] + ranks[n-i-1] < max)
			max = ranks[i] + ranks[n-i-1];
	}

	cout << max << endl;


	return 0;
}
