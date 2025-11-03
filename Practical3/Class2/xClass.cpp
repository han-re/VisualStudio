#include <iostream>
#include <ctime>
#include "xClass1.h"

using std::cout;
using std::endl;



xClass::xClass(int length, int max_val)
	: size(length) 
{
	if (length <= 0 || max_val <= 0) {
		cout << "Error: Array Length or Array Maximum Value needs to be greater than 0";
		size = 0;
		data = nullptr;
		return;
	}

	data = new int[size];

	for (int i = 0; i < size; i++) {
		data[i] = std::rand() % (max_val);
	}
}

xClass::~xClass() {
	delete[] data;
}

void xClass::print_data() const {
	cout << "Array: [";
	
	for (int i = 0; i < size; i++) {
		cout << data[i];

		if (i < size - 1) {
			cout << ", ";
		}
	}
	cout << "]\n";
}

int xClass::ave_data() const {
	int count = 0;
	for (int i = 0; i < size; i++) {
		count += data[i];
	}

	if (count > 0) {
		return count / size;
	}

	else {
		return 0;
	}
}

int xClass::data_at(int i)const {
	if (i >= 0 && i < size) {
		return data[i];
	}
	else {
		cout << "Number not within index range, try again!" << endl;
		exit(0);
	}
}

int xClass::range_data(int min, int max) const{
	int count;
	for (int i = 0; i < size; i++) {
		if (data[i] >= min && data[i] <= max) {
			count++;
		}
	}
	return count;
}

xClass::xClass(const xClass& b) {
	size = b.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = b.data[i];
	}
}

void xClass::operator += (const xClass& b) {

	//1. create new array 2. have size dynamically allocated to size of a +b 
	//3. add all a original elements 4. append b elements
	//5. delete old array 6. point it to same memory address
	//a += b

	int newSize = b.size + size;

	int* newData = new int[b.size + size];

	for (int i = 0; i < size; i++) {
		newData[i] = data[i];
	}
	for (int i = 0; i < newSize; i++) {
		newData[size + i] = b.data[i];
	}

	delete[] data;

	data = newData;
	size = newSize;

}

