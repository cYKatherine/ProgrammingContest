#include <iostream>
#include <map>
#include <set>
#include <vector>

#define FIDX(_x, _y) (_x*n+_y)
#define SETFRIEND(_x, _y) { friends[_x*n+_y] = true; friends[_y*n+_x] = true; }
#define ISFRIEND(_x, _y) (friends[FIDX(_x, _y)])

long traverse(std::vector<bool> &checked, std::vector<bool> &friends, std::vector<int> &owes, int i)
{
	long total = 0;
	int n = owes.size();
	if(!checked[i]) {
		total += owes[i];
		checked[i] = true;
		for(int k = 0; k < n; ++k) {
			if(ISFRIEND(i, k)) total += traverse(checked, friends, owes, k);
		}
	}
	return total;
}

int main(int argc, char **argv)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> owes;
	for(int i = 0; i < n; ++i) {
		int o;
		std::cin >> o;
		owes.push_back(o);
	}
	std::vector<bool> friends(n*n);
	for(int i = 0; i < m; ++i) {
		int x, y;
		std::cin >> x >> y;
		SETFRIEND(x, y);
	}
	
	std::vector<bool> checked(n);
	
	bool possible = true;
	for(int i = 0; i < n; ++i) {
		if(!checked[i]) {
			if(traverse(checked, friends, owes, i) != 0) { possible = false; break; }
		}
	}
	std::cout << (possible ? "POSSIBLE" : "IMPOSSIBLE") << std::endl;
	
}
