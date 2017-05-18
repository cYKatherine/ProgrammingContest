#include <iostream>
#include <vector>

using namespace std;

int total = 0;
int partialSolution[100000];

bool valid(int i) {
	if (partialSolution[i + 1] == -1)
		return true;
	else {
		if (partialSolution[i] == partialSolution[i+1] || partialSolution[i] == partialSolution[i+1]-1 || partialSolution[i] == partialSolution[i+1]+1)
			return true;
		else
			return false;
	}
}

void backtracking(int i, int N) {
	if (i == N - 1) {
		if (valid(i-1))
			total += 1;
	}
		
	else {
		if (partialSolution[i] != -1) {
			i += 1;
			backtracking(i,N);
		}
		else {
			vector<int> possibleItems;
			if (partialSolution[i-1] - 1 >= 0)
				possibleItems.push_back(partialSolution[i-1] - 1);
			possibleItems.push_back(partialSolution[i-1]);
			possibleItems.push_back(partialSolution[i-1] + 1);
			
			for (int j = 0; j < possibleItems.size(); j++) {
				partialSolution[i] = possibleItems[j];
				if (valid(i)) {
					backtracking(i+1, N);
				}
					
				partialSolution[i] = -1;
			}
		}
		
		
		
	}
}

int main() {
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> partialSolution[i];
	}
	
	partialSolution[0] = 0;
	partialSolution[N-1] = 0;
	
	backtracking(1, N);
	
	cout << total << endl;
	
	return 0;
}
