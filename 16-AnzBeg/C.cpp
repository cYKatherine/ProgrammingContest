#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string students [111][2];

int main() {
	int size;
	cin >> size >> ws;

	for (int i = 0; i < size; i++) {
		string tmp;
		getline(cin,tmp);
		stringstream ss(tmp);
		
		string first, last;
		ss >> first >> last;
		
		students[i][0] = first;
		students[i][1] = last;
	}


	for (int i = 0; i < size; i++) {
		int min = i;
		for(int j = i+1; j < size; j++) {
			if (students[j][1] < students[min][1])
				min = j;
			else if ((students[j][1] == students[min][1]) && (students[j][0] < students[min][0]))
				min = j;
		}
		swap(students[i][0],students[min][0]);
		swap(students[i][1],students[min][1]);
	}

	for (int i = 0; i < size; i++) {
		cout << students[i][0] << " " << students[i][1] << endl;
	}

	
		
	return 0;
}
