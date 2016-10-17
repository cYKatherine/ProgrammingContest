#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int date1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int date2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
string birthday[2000];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> birthday[i];
	}

	for (int i = 0; i < n; i++) {
		int year,month,day;
		stringstream(birthday[i].substr(4,7)) >> year;
		stringstream(birthday[i].substr(2,3)) >> month;
		stringstream(birthday[i].substr(0,1)) >> day;

		cout << year << month << day <<  endl;
	}
	return 0;
}
