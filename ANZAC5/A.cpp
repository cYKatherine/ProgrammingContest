#include <iostream>

using namespace std;

int testCase[10000];


bool valid (int firstX, int secondX, int firstY, int secondY) {
		if (firstX <= secondX && firstY <= secondY)
			return true;
		return false;
}

int valid(int number) {
	if (number < 10) {
		return number;
	}
	else if (number < 100) {
		int firstX, firstY, secondX, secondY;
		int firstNumber, secondNumber;
		firstNumber = number / 10;
		secondNumber = number % 10;
		
		if (firstNumber == 0){
			firstX = 3;
			firstY = 2;
		}
		else{
			
			if (firstNumber % 3 != 0) {
				firstX = firstNumber / 3; 
				firstY = firstNumber % 3;
			}
			else {
				firstX = firstNumber / 3 - 1;
				firstY = 3;
			}
				
		}
		
		if (secondNumber == 0) {
			secondX = 3;
			secondY = 2;
		}
		else {
			
			if (secondNumber % 3 != 0) {
				secondX = secondNumber / 3;
				secondY = secondNumber % 3;
			}

			else {
				secondX = secondNumber / 3 - 1;
				secondY = 3;
			}

		}
		
		
		if (valid(firstX, secondX,firstY,secondY))
			return number;
		
	}
	else{
		int firstX, firstY, secondX, secondY, thirdX, thirdY;
		int firstNumber, secondNumber, thirdNumber;
		firstNumber = number / 100;
		int tmp = number % 100;
		secondNumber = tmp / 10;
		thirdNumber = tmp % 10;
		
		if (firstNumber == 0){
			firstX = 3;
			firstY = 2;
		}
		else{
			
			if (firstNumber % 3 != 0) {
				firstX = firstNumber / 3; 
				firstY = firstNumber % 3;
			}
			else {
				firstX = firstNumber / 3 - 1;
				firstY = 3;
			}
				
		}
		
		if (secondNumber == 0) {
			secondX = 3;
			secondY = 2;
		}
		else {
			
			if (secondNumber % 3 != 0) {
				secondX = secondNumber / 3;
				secondY = secondNumber % 3;
			}

			else {
				secondX = secondNumber / 3 - 1;
				secondY = 3;
			}

		}
		if (thirdNumber == 0) {
			thirdX = 3;
			thirdY = 2;
		}
		else {
			if (thirdNumber % 3 != 0) {
				thirdX = thirdNumber / 3;
				thirdY = thirdNumber % 3;
			}

			else {
				thirdX = thirdNumber / 3 - 1;
				thirdY = 3;
			}

		}
		
		
		if (valid(firstX,secondX, firstY, secondY) && valid(secondX, thirdX, secondY, thirdY) && valid(firstX,thirdX, firstY, thirdY))
			return number;
	
	}
	return -1;
	
}

int main() {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		int tmp;
		cin >> tmp;
		testCase[i] = tmp;
	}
	
	for (int i = 0; i < T; i++) {
		int j = 0;
		
		while (valid(testCase[i] - j) == -1 && valid(testCase[i] + j) == -1) {
			j += 1;
		}
		
		if (valid(testCase[i] - j) != -1)
			cout << valid(testCase[i] - j) << endl;
		else
			cout << valid(testCase[i] + j) << endl;
	}
	return 0;
}
