#include <iostream>
#include <vector>
#include <math.h>
#include <string>


using namespace std;

int C[100];
int F[100];
vector< vector <int> > playerIdEachMission;
vector <string> possibleCombination;
vector <int> probability;
vector <string> possibleChosen;


//double combination(int N, int Q) {
//	int numerator = 1, denominator = 1;
//	for (int i = N-Q+1; i < N + 1; i ++) {
//		numerator *= i;
//	}
//	
//	for (int i = 1; i < Q+1; i++) {
//		denominator *= 1;
//	}
//	
//	return (numerator / denominator);
//}

string decimalToBinary(int n) {
	string tmp = "";
	int reminder;
	while (n / 2 != 0) {
		reminder = n % 2;
		tmp = to_string(reminder) + tmp;
		n = n / 2;
	}
	
	reminder = n % 2;
	tmp = to_string(reminder) + tmp;
	
	return tmp;
}

void generateActualString(int N, int S){
	for (int i = 0; i < (pow(2,N)); i++) {
		if (__builtin_popcount(i) == S) {	
			string tmp = decimalToBinary(i);
			while (tmp.size() != N) {
				tmp = '0' + tmp;
			}
			possibleCombination.push_back(tmp);
		}
	}
}

void generateChosenString(int N, int Q){
	for (int i = 0; i < (pow(2,N)); i++) {
		if (__builtin_popcount(i) == Q) {	
			string tmp = decimalToBinary(i);
			while (tmp.size() != N) {
				tmp = '0' + tmp;
			}
			possibleChosen.push_back(tmp);
		}
	}
}

vector<int> generateSpiesID (int index, int S) {
	vector <int> spiesID;
	for (int i = 0; i < possibleCombination[index].size(); i++) {
		if (possibleCombination[i] == '1') {
			spiesID.push_back(i + 1);
		}
	}
	
	return spiesID;
}

int main() {
	// Input data
	int N, S, M, Q;
	cin >> N;
	cin >> S;
	cin >> M;
	cin >> Q;

	for (int i = 0; i < M; i++) {
		cin >> C[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> F[i];
	}

	for (int i = 0; i < M; i++) {
		vector <int> playerID;
		for (int j = 0; j < C[i]; j++) {
			int tmp;
			cin >> tmp;
			playerID.push_back(tmp);
		}
		playerIdEachMission.push_back(playerID)
	}

	//
	generateActualString(N,S);
	
	for (int i = 0; i < possibleCombination.size(); i++) {
		vector<int> spiesID = generateSpiesID(i, S);
		int probability;
		
		for (int j = 0; j < M; j ++) {
			
		}
		
	
		probability.push_back(probability);
	}
	
	//
	generateChosenString(N,Q);
	
	// Compare actual chosen player with possible combination
	double maxProbability = 0;
	
	for (int i = 0; i < possibleChosen.size(); i++) {
		int k = 0;
		bool notFound = true;
		while (notFound && k < possibleCombination.size(); k++)) { 
			bool valid = true;
			int j = 0;
			while (valid && j < N) {
				if (possibleChosen[i][j] == possibleCombination[i][j])
					valid = false;
				j += 1;
			}
			
			if (valid)
				notFound = false;
			
			k += 1;
		}	
		
		if (probability[k] > maxProbability) {
			maxProbability = probability[i];
		}
	}
	
	cout << maxProbability << endl;

	
 	
	
	
	
	return 0;
}
