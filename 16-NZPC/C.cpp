#include<iostream>

using namespace std;

int year[10000];

bool shouldHold(int year) {
	if ((year-1896) % 4 == 0 && year >= 1896)
		return true;
	else
		return false;
}

bool duringWorldWar(int year) {
	if ((year >= 1914 && year <= 1918) || (year >= 1939 && year <= 1945))
		return true;
	else 	
		return false;
}

int main() {
	int tmp = -1;
	int i = 0;
	while (tmp != 0) {
		cin >> year[i];
		tmp = year[i];
		i += 1;
	}
	
	tmp = year[0];
	i = 0;
	while (tmp != 0) {
		if (shouldHold(year[i]) && !(duringWorldWar(year[i])) && year[i] <= 2020)
			cout << year[i] << " Summer Olympics" << endl;
		else if (shouldHold(year[i]) && duringWorldWar(year[i]))
			cout << year[i] << " Games cancelled" << endl;
		else if (shouldHold(year[i]) && year[i] > 2020)
			cout << year[i] << " No city yet chosen" << endl;
		else
			cout << year[i] << " No summer games" << endl;
		i += 1;
		tmp = year[i];
	}
	return 0;
}
