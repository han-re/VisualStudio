#include "sarray.h"
#include <iostream>
#include <string>

using namespace std;

void testDbl() {

	int size = 5;
	sarray<double> dbl(size);

	for (int i = 0; i < size; i++) {
		dbl[i] = 0.1 + i;
	}

	for (int i = 0; i < size; i++) {
		cout << dbl[i] << " ";
	}
	cout << endl;
}

void testChar() {

	int size = 5;
	sarray<char> dbl(size);

	for (int i = 0; i < size; i++) {
		dbl[i] = 'a' + i;
	}

	for (int i = 0; i < size; i++) {
		cout << dbl[i] << " ";
	}
	cout << endl;
}

void testString() {

	int size = 5;
	sarray<string> dbl(size);

	for (int i = 0; i < size; i++) {
		dbl[i] = "String" + to_string(i);
	}

	for (int i = 0; i < size; i++) {
		cout << dbl[i] << " ";
	}
	cout << endl;
}



int main() {


	testDbl();
	testChar();
	testString();


	return 0;
}