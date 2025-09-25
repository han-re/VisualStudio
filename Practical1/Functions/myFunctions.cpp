#include "myFunctions.h"
#include <iostream>

using namespace std;

int iAdd(int a, int b) {
	return a + b;
}

double divideXbyY(double x, double y) {
	if (y != 0){
		return x / y;
	}

	else {
		cout << "Division by Zero Error";
		exit(0);
	}
}

int divideXbyY(int a, int b) {
	return a / b;
}

double Log(double x) {
	if (x <= 0) {
		cout << "Log by Zero Error";
		exit(0);
	}
	else {
		return log(x);
	}
}

double Sqrt(double x) {
	if (x >= 0) {
		return sqrt(x);
	}

	else {
		cout << "Square Root by Zero Error";
		exit(0);
	}
}

void sortPrint(int i, int j, int k) {
	

	if (i < j) {
		int temp = i;
		i = j;
		j = temp;
	}
	else if (i < k) {
		int temp = i;
		i = k;
		k = temp;
	}
	else if (j < k) {
		int temp = j;
		j = k;
		k = temp;
	}

	int numbers[3] = {i,j,k};


	for (int index = 0; index < 3; index++) {
		cout << numbers[index] << "\n";
	}
}