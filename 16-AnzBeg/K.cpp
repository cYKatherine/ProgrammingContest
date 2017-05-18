#include<iostream>
#include<string>

using namespace std;

int boxes[10];

int main(){
	for (int i = 0; i < 6; i ++) {
		cin >> boxes[i];
	}
	
	int height1,height2;
	cin >> height1;
	cin >> height2;
	
	for (int i = 0; i < 6; i ++) {
		int max = i;
		for(int j = i + 1; j < 6; j ++) {
			if (boxes[j] > boxes[max])
				max = j;
		}
		swap(boxes[i],boxes[max]);
	}
	
	for (int i = 0; i < 6; i ++) {
		for (int j = i+1; j < 6; j ++) {
			for (int k = j + 1; k < 6; k ++) {
				if (boxes[i]+boxes[j]+boxes[k] == height1)
					cout << boxes[i] << " " << boxes[j] << " " << boxes[k] << " ";
			}
		}
	}
	
	for (int i = 0; i < 6; i ++) {
		for (int j = i+1; j < 6; j ++) {
			for (int k = j + 1; k < 6; k ++) {
				if (boxes[i]+boxes[j]+boxes[k] == height2)
					cout << boxes[i] << " " << boxes[j] << " " << boxes[k] << endl;
			}
		}
	}

	return 0;
}
