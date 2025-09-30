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
	if (i < k) {
		int temp = i;
		i = k;
		k = temp;
	}
	if (j < k) {
		int temp = j;
		j = k;
		k = temp;
	}

	int numbers[3] = {i,j,k};


	cout << "Sorted numbers: " << numbers[0] << ", " << numbers[1] << ", " << numbers[2];
	
	

}

void bubbleSort(int m, int n, int o) {


	int num[3] = {m, n, o};

	for (int index = 0; index < 2; index++) {
		for (int index = 0; index < 2; index++) {
			if (num[index] < num[index + 1]) {
				int temp = num[index];
				num[index] = num[index + 1];
				num[index + 1] = temp;
			}
		}
	}

	for (int index = 0; index <= 2; index++) {
		cout << num[index] << " ";
	}
}

double myCalculator(double a, char op, double b) {


	switch (op) {
		case '+': return a + b;
		case '-': return a - b; 
		case '*': return a * b; 
		case '/': 
			if (b != 0) {
				return a / b;
			}
			else {
				cout << "Error division with zero does not work." << "\n";
				return 0;
			}
		default: 
			cout << "Error, Expression does not contain proper operator" << "\n";
			return 0;
	}

}