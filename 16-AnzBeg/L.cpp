#include <iostream>
#include <string>

using namespace std;

double dimension[100000][3];

bool checkLetter(double thick, double height, double length){
	if ((thick >= 0.25) && (thick <= 7)){
		if ((height >= 90) && (height <= 155)){
			if ((length >= 125) && (length <= 290))
				return true;
		}
	}
	return false;
}

bool checkPacket(double thick, double height, double length){
	if ((thick >= 0.25) && (thick <= 50)){
		if ((height >= 90) && (height <= 300)){
			if ((length >= 125) && (length <= 380)){
				if ((thick > 7)||(height>155)||(length>290))
					return true;
			}	
		}
	}
	return false;
}

bool checkParcel(double thick, double height, double length){
	if (thick >= 0.25){
		if (height >= 90){
			if (length >= 125){
				if ((thick > 50)||(height>300)||(length>380)){
					if (2*thick + 2*height + length <= 2100)
						return true;
				}
			}	
		}
	}
	return false;
}

int main() {
	double length = -1, height = -1, thickness = -1;	
	int i = 0;
	
	while ((length!=0) && (height!=0) && (thickness!= 0)) {
		cin >> dimension[i][0];
		cin >> dimension[i][1];
		cin >> dimension[i][2];
		
		for (int x = 0; x < 3; x++) {
			int min = x;
			for (int y = x+1; y < 3; y++) {
				if (dimension[i][y] < dimension[i][min])
					min = y;
			}
			swap(dimension[i][x],dimension[i][min]);
		}
		
		length = dimension[i][0];
		height = dimension[i][1];
		thickness = dimension[i][2];
		
		i += 1;
	}
	
	i = 0;
	
	length = dimension[i][0];
	height = dimension[i][1];
	thickness = dimension[i][2];
	
	while ((length!=0) && (height!=0) && (thickness!= 0)) {
		if (checkLetter(dimension[i][0],dimension[i][1],dimension[i][2])){
			cout << "letter" << endl;
		}
		else if (checkPacket(dimension[i][0],dimension[i][1],dimension[i][2])) {
			cout << "packet" << endl;
		}
		else if (checkParcel(dimension[i][0],dimension[i][1],dimension[i][2])) {
			cout << "parcel" << endl;
		}
		else
			cout << "not mailable" << endl;
		
		i += 1;
		
		length = dimension[i][0];
		height = dimension[i][1];
		thickness = dimension[i][2];
	}

	return 0;
}
