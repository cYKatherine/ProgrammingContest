#include<iostream>
#include<string>
using namespace std;

int frequency[5][2] = {{97,0},{101,0},{105,0},{111,0},{117,0}};

int main() {
	string tmp;
	getline(cin,tmp);

	for (int i = 0; i < tmp.size(); i++) {
		if ((tmp[i] == 'a') || (tmp[i] == 'A'))
			frequency[0][1] += 1;
		else if ((tmp[i] == 'e') || (tmp[i] == 'E'))
			frequency[1][1] += 1;
		else if ((tmp[i] == 'i') || (tmp[i] == 'I'))
			frequency[2][1] += 1;
		else if ((tmp[i] == 'o') || (tmp[i] == 'O'))
			frequency[3][1] += 1;
		else if ((tmp[i] == 'u') || (tmp[i] == 'U'))
			frequency[4][1] += 1;
	}

	for (int i = 0; i < 5; i++) {
		int min = i;
		for (int j = i+1; j < 5; j ++) {
			if (frequency[j][1] > frequency[min][1])
				min = j;
			else if ((frequency[j][1] == frequency[min][1]) && (frequency[j][0] < frequency[min][0]))
				min = j;
		}
		swap(frequency[min][0],frequency[i][0]);
		swap(frequency[min][1],frequency[i][1]);
	}

	for (int i = 0; i < 5; i++) {
		cout << (char)frequency[i][0] << ":" << frequency[i][1] << endl;
	}

	return 0;
}
