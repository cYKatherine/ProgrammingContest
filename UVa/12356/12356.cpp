#include <bits/stdc++.h>

using namespace std; 


int main(){
	int s,b;
	cin >> s;
	cin >> b;

	while (s!=0 && b !=0){
		vector<int> left;
		left.push_back(-1);
		for (int i = 1; i <= s; i++){
			left.push_back(i-1);
		}
		
		vector<int> right;
		right.push_back(-1);
		for (int i = 1; i <= s; i++) {
			right.push_back(i+1);
		}

		for (int i = 0; i < b; i++) {
			int l,r;
			cin >> l;
			cin >> r;
			
			if (left[l]>=1)
				cout << left[l] << " ";
			else
				cout << "* ";

			if (right[r] <= s)
				cout << right[r] << endl;
			else
				cout << "*" << endl;
			
			if (left[l]>0)
				right[left[l]] = right[r];
			if (right[r]<s+1)
				left[right[r]] = left[l];
		}
		
		cin >> s;
		cin >> b;
		cout << "-" << endl;
	}


	return 0;
}
