#include<iostream>
#include<string>

using namespace std;

string operation[15];
int operand[15];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> operation[i];
		cin >> operand[i];
	}
	
	int messUp = 0;
	
	for (int i = 0; i < 100; i++) {
		int number = i + 1;
		bool messed = false;
		for (int j = 0; j < n; j++) {
			if (operation[j] == "ADD")
				number += operand[j];
			else if (operation[j] == "SUBTRACT") {
				number -= operand[j];
				if (number < 0)
					messed = true;
			}
			else if (operation[j] == "MULTIPLY")
				number *= operand[j];
			else {
				if (number % operand[j] == 0)
					number /= operand[j];
				else
					messed = true;
			}
			
			if (messed)
				break;
		}
		if (messed)
			messUp += 1;
	}
	
	cout << messUp << endl;
	
	
	return 0;
}

