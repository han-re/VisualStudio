#include "iArray.h"
#include <iostream>
using namespace std;


iArray::~iArray() {
	delete[] data;
}

void iArray::fillArray(int limit, int n) {
	for (int i = 0; i < n; i++) {
		int val = rand() % limit;
		data[i] = val;
	}
	
}

void iArray::print() {


	cout << "Array: [";
	for (int i = 0; i < size; i++) {

		cout << data[i];
		if (i < size - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;

}

int iArray::countOccurrence(int x) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (data[i] == x) {
			count++;
		}
	}
	return count;
}

int iArray::iReverseArrayElement() {

}

int main() {
	iArray* arr = new iArray(20);
	arr->fillArray(10, 20);
	arr->print();
	cout << "Count: " << arr->countOccurrence(5);

	return 0;
}