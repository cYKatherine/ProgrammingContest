#include<iostream>
#include<vector>

using namespace std;

int triangle[6][3][3];
vector< vector<int> > partialSolution;


bool notInPartialSolution(int x) {
	for (int i = 0; i < partialSolution.size(); i++) {
		if (x == partialSolution[i][0])
			return false;
	}
	return true;
}

int sum(){
	int sum = 0;
	for (int i = 0; i < 6; i ++) {
		sum += triangle[partialSolution[i][0]][partialSolution[i][1]][2];
	}
	return sum;
}

int backtracking() {
	if (partialSolution.size() == 6)
		return sum(); // Sum up the value of partialSolution
	else{
		
		int max = -1;
		// Get possible items	
		vector< vector<int> > possibleItems;
		vector<int> tmp;
		int currentTriangle = partialSolution[partialSolution.size()-1][0];
		int currentRotation = partialSolution[partialSolution.size()-1][1];
		for (int i = 0; i < 6; i ++) {
			for (int j = 0; j < 3; j ++) {
				if (triangle[i][j][1] == triangle[currentTriangle][currentRotation][0]){
					if (notInPartialSolution(i))
						tmp.push_back(i);
						tmp.push_back(j);
						possibleItems.push_back(tmp);
				}
			}
		}
		// Try next possible item, if it doesn't work go to next one
		int k = 0;
		int currentSum;
		while (k < possibleItems.size()) {
			vector<int> tmp2;
			tmp2.push_back(possibleItems[k][0]);
			tmp2.push_back(possibleItems[k][1]);
			partialSolution.push_back(tmp2);
			currentSum = backtracking();
			if (currentSum > max)
				max = currentSum;
			partialSolution.pop_back();
			k += 1;
		}
		return max;
	}
}

int main() {
	// Initialize triangle list
	for (int i = 0; i < 6; i ++) {
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		
		triangle[i][0][0] = a;
		triangle[i][0][1] = b;
		triangle[i][0][2] = c;
		
		triangle[i][1][0] = b;
		triangle[i][1][1] = c;
		triangle[i][1][2] = a;
		
		triangle[i][2][0] = c;
		triangle[i][2][1] = a;
		triangle[i][2][2] = b;
	}
	
	
	int max = -1;
	for (int i = 0; i < 3; i++) {
		vector<int> tmp;
		// Backtracking triangle[0][0], triangle[0][1], triangle[0][2] respectively
		tmp.push_back(0);
		tmp.push_back(i);
		partialSolution.push_back(tmp);
		int sum;
		sum = backtracking();
		// Change the value of max
		partialSolution.pop_back();
		if (sum > max)
			max = sum;
	}
	
	cout << max << endl;
	
	return 0;
}
