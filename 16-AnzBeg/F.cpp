#include<iostream>
using namespace std;

int main() {
	string name;
	int age, weight;
	cin >> name;
	cin >> age;
	cin >> weight;

	if ((age > 17) || (weight >= 80))
		cout << name << " " << "Senior" << endl;
	else
		cout << name << " " << "Junior" << endl;
	
	return 0;
}

