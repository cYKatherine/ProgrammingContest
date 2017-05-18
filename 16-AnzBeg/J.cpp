#include<iostream>
#include<string>
using namespace std;

string name[120];
int volumn[120][3];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> name[i] >> ws;
		cin >> volumn[i][0];
		cin >> volumn[i][1];
		cin >> volumn[i][2];
	}
	
	int lost = -1;
	int get = -1;
	
	int min = 0;
	int max = 0;
	
	bool found = false;
	
	for (int i = 1; i < n; i++) {
		if (volumn[i][0]*volumn[i][1]*volumn[i][2] < volumn[min][0]*volumn[min][1]*volumn[min][2]) {
			min = i;
			found = true;
		}
			
		if (volumn[i][0]*volumn[i][1]*volumn[i][2] > volumn[max][0]*volumn[max][1]*volumn[max][2]) {
			max = i;
			found = true;
		}
	}
	
	if (found){
		lost = min;
		get = max;
	}
	
	if ((lost == -1) && (get == -1))
		cout << "No child has lost jelly." << endl;
	else
		cout << name[lost] << " has lost jelly to " << name[get] << "." << endl;
	
	return 0;
}
