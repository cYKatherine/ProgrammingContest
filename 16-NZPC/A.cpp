#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

double price[120];

int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> price[i];
	}
	
	
	for (int i = 0; i < n; i ++) {
		int min = i;
		for (int j = i+1; j < n; j++) {
			if (price[j] < price[min])
				min = j;
		}
		swap(price[i],price[min]);
	}
	
	cout.precision(2);
	cout << fixed;
	cout << price[1] << endl;
	
	return 0;
}
