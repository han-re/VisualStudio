
#include <iostream>
#include <string>
using namespace std;

void printArray(int* data, int size) {
	if (data != NULL && size > 0) {
		string result = "[";
		for (int count = 0; count < size; count++) {
			result += to_string(data[count]);
			if (count < size - 1) {
				result += ", ";
			}
		}
		result += "]";
		cout << result << endl;
	}
	else {
		cout << "Error - Invalid Array" << endl;
	}
}

bool bResizeArray(int*& pi, int& size, int sizeNew)
{
	// allocate new array
	int* piNew = NULL;
	if (sizeNew <= 0 || (piNew = new int[sizeNew]) == NULL)
		return false; // resize fails
	// if expanding, initialise the new tail to zero
	if (sizeNew > size) {
		for (int i = 0; i < size; i++)
			piNew[i] = pi[i];
		for (int i = size; i < sizeNew; i++)
			piNew[i] = 0;
	}
	// if shrinking, erase the tail contents
	else {
		for (int i = 0; i < sizeNew; i++)
			piNew[i] = pi[i];
	}
	// delete old array
	delete[] pi;
	// point pi to the new array, and update size to sizeNew
	pi = piNew;
	size = sizeNew;
	// resize successful
	return true;
}

bool bAddArrays(char*& pchs, int& size, char* pchs2, int size2) {
	pchs2 = new int[size 2];
	if (size == size2 || size2 <= 0) {
		return false;
	}

	if (pchs2 == NULL) {
		return false;
	}


}


int main()
{
	// initial array
	int size = 10;
	int* pi = new int[size];
	for (int i = 0; i < size; i++)
		pi[i] = i;
	printArray(pi, size);
	cout << endl;
	// expanding
	if (bResizeArray(pi, size, 20)) {
		printArray(pi, size);
		cout << endl;
	}
	// shrinking
	if (bResizeArray(pi, size, 5)) {
		printArray(pi, size);
		cout << endl;
	}
	// free array memory
	delete[] pi;
	return 0;
}