#include <iostream>
#include <string>
#include <cstring>
#include <utility>
#include <algorithm>
#include <vector>

int wrap(int i) { return (i+1)%5; }

int main(int argc, char **argv)
{
	std::string key, data;
	getline(std::cin, key);
	getline(std::cin, data);
	
	std::vector<char> table;
	key = key + "ABCDEFGHIJKLMNOPRSTUVWXYZ";
	for(int i = 0; table.size() < 25; ++i) {
			char c = std::toupper(key[i]);
			if(c!=' ' && std::find(table.begin(), table.end(), c) == table.end()) {
				table.push_back(c);
			}
	}
	
	std::string data2;
	for(int i = 0; i < data.size(); ++i) {
		if(data[i] == ' ') continue;
		data2.push_back(std::toupper(data[i]));
	}
	std::swap(data, data2);
	
	//for(int i = 0; i < 25; ++i) std::cout << table[i];
	//std::cout << "\n-----\n";
	//std::cout << data << '\n';
	
	int i = 0;
	while(i < data.size()) {
		char chars[2];
		chars[0] = data[i];
		if(i+1 == data.size() || data[i+1] == chars[0]) {
			chars[1] = 'X';
			++i;
		} else {
			chars[1] = data[i+1];
			i += 2;
		}
		//int k0 = std::distance(data.begin(), std::find(data.begin(), data.end(), chars[0]);
		//int k1 = std::find(data.begin(), data.end(), chars[1]);
		//int k0, k1;
		int k0 = 0, k1 = 0;
		for(int m = 0; !k0 || !k1; ++m)
		{
			if(table[m] == chars[0]) k0 = m;
			if(table[m] == chars[1]) k1 = m;
		}
		//std::cout << k0 << ' ' << k1 << '\n';
		
		
		int x0 = k0%5;
		int x1 = k1%5;
		int y0 = k0/5;
		int y1 = k1/5;
		
		
		if(y0==y1) {
			// same row
			int row = y0;
			std::cout << table[(5*row)+wrap(k0)];
			std::cout << table[(5*row)+wrap(k1)];
		} else if(x0==x1) {
			// same column
			std::cout << table[(k0+5)%25];
			std::cout << table[(k1+5)%25];
		} else {
			//std::swap(x0, x1);
			std::cout << table[y0*5+x1];
			std::cout << table[y1*5+x0];
		}
	}
	std::cout << std::endl;
	
	
}
