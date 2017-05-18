#include <iostream>
#include <string>
#include <vector>


std::vector<char> dungeon;
std::vector<char> visited;
std::vector<char> safe;
int w, h;
int playerx, playery;

int idx(int x, int y) { return w*y+x; }

#define tile(_x, _y) dungeon[idx(_x, _y)]

bool breeze(int x, int y) 
{
	return tile(x-1, y) == 'T' || tile(x+1, y) == 'T' || tile(x, y-1) == 'T' || tile(x, y+1) == 'T';
}

int descend(int x, int y) 
{
	int gold = 0;
	int i = idx(x, y);
	char &v = visited[i];
	char t = dungeon[i];
	if(v || t == '#') return 0;
	v = 1;
	if(t == 'G') gold += 1;
	if(!breeze(x, y)) {
		gold += descend(x-1, y) + descend(x+1, y) + descend(x, y-1) + descend(x, y+1);
	} 
	return gold;
}

int main(int argc, char **argv)
{

	std::cin >> w >> h;
	dungeon.resize(w*h);
	visited.resize(w*h);
	for(int i = 0; i < h; ++i) {
		std::string line;
		std::cin >> line;
		for(int k = 0; k < line.size(); ++k) {
			dungeon[idx(k, i)] = line[k];
			if(line[k] == 'P') {
				playerx = k;
				playery = i;
			}
		}
	}
	std::cout << descend(playerx, playery) << '\n';

}
