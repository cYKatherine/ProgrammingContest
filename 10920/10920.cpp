#include<bits/stdc++.h>

using namespace std;

int main() {
	int s,p;
	cin >> s;
	cin >> p;

	while (!(s==0 && p == 0)) {
		int line, column;
		line = column = (s + 1) / 2;
		
		if (p != 1) { 
			int j,k;

			if (p <= 9) {
				j = 3;
				k = p-1;
			}
			else if (p <= 25) {
				j = 5;
				k = p - 9;
			}
			else{
				j = sqrt(p - 1);
				if (j % 2 == 0)
					j += 1;
				else
					j += 2;
				k = p - (j-2) * (j-2);
			}

			line = column = ((j-3)/2) + line;

			if (k == 1)
				line += 1;
			else if (k <= j - 1){
				line += 1;
				column -= (k-1);
			}
			else if (k <= (j-1) * 2) {
				line += 1;
				column -= (j-2);
				line -= (k-j+1);
			}
			else if (k <= (j-1) * 3){
				line += 1;
				column -= (j-2);
				line -= (j-1);
				column += (k-(j-1) * 2);
			}
			else{
				line += 1;
				column -= (j-2);
				line -= (j-1);
				column += ((j-1));
				line += (k-(j-1)*3);
			}

		}

		cout <<"Line = " << line << ", column = " << column << "." << endl;

		cin >> s;
		cin >> p;
	}
	return 0;
}
