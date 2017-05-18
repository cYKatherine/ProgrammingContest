#include<iostream>
#include<vector>

using namespace std;

int tree[2100];
int pre[2100];
vector<int> pre;

int main() {
	int c;
	cin >> c;
	
	int tmp = -1;
	int i = 0;
	while (tmp != 0) {
		int x;
		cin >> x;
		tmp = tree[i];
		i += 1;
	}
	
	i = 0;
	tmp = tree[i];
	
	while (tmp != 0) {
		if (tree[i] == -1){
			i += 2;
			pre.push_back(tree[i]);	
		}
		else if (tree[i] == -2) {
			
		}
		else if (tree[i] == -3) {
			i += 1;
			for (int j = 0; j < tree[i]; j++) {
				pre.push_back(10);
			}
		}
		
		i += 1;
		tmp = tree[i];
	}

	return 0;
}
