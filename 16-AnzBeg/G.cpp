#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int>frequency;

int main() {
	string input;
	cin >> input;

	int complexity = 0;

	for (int i = 0; i < input.size(); i++) {
		int min = i;
		for (int j = i+1; j < input.size(); j++) {
			if (input[j] < input[min])
				min = j;
		}
		swap(input[i],input[min]);
	}

	int i = 0;
	while (i < input.size()) {
		int j = i+1;
		int duplicated = 0;
		while ((input[i] == input[j]) && (j < input.size())) {
			duplicated += 1;
			j += 1;
		}	

		frequency.push_back(duplicated);
		
		complexity += 1;
		i = j;
	}

	if (complexity > 2) {
		for(int i = 0; i < frequency.size(); i ++) {
			int min = i;
			for (int j = i+1; j < frequency.size(); j++) {
				if (frequency[j] < frequency[min])
					min = j;
			}
			swap(frequency[i],frequency[min]);
		}
		int eleminate = 0;
		for(int i = 0; i < (complexity - 2); i++) {
			eleminate += frequency[i] + 1;
		}
		cout << eleminate << endl;
	}	
	else
		cout << 0 << endl;
	
	return 0;
}
