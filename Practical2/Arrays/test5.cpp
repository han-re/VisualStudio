
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

void printCharArray(char* data, int size) {
	if (data != NULL && size > 0) {
		cout << "[";
		for (int i = 0; i < size; i++) {
			cout << data[i];

			if (i < size - 1) {
				cout << ", ";
			}
		}
		cout << "]" << "\n";

	}
	else {
		cout << "Error - Invalid Array" << "\n";
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
	if (size2 <= 0) {
		return false;
	}


	else {
		int temp;
		temp = size + size2;

		char* temp_array = new char[temp];
		if (temp_array == NULL) {
			return false;
		}

		for (int i = 0; i < size; i++) {
			temp_array[i] = pchs[i];
		}
		for (int i = 0; i < size2; i++) {
			temp_array[size + i] = pchs2[i];
		}

		delete[] pchs;
		pchs = temp_array;
		size = temp;

		return true;
	}


}

//int main1()
//{
//	// initial array
//	int size = 10;
//	int* pi = new int[size];
//	for (int i = 0; i < size; i++)
//		pi[i] = i;
//	printArray(pi, size);
//	cout << endl;
//	// expanding
//	if (bResizeArray(pi, size, 20)) {
//		printArray(pi, size);
//		cout << endl;
//	}
//	// shrinking
//	if (bResizeArray(pi, size, 5)) {
//		printArray(pi, size);
//		cout << endl;
//	}
//	// free array memory
//	delete[] pi;
//	//return 0;
//}

int main() {
	//pchs, size, pchs2, size 2
	srand(time(0));

	int size = rand() % 8 + 3, size2 = rand() % 8 + 3;

	char* pchs = new char[size];
	char* pchs2 = new char[size2];


	

	for (int i = 0; i < size; i++) {
		char randLetter = rand() % 26 + 'A';
		pchs[i] = randLetter;

	}

	for (int i = 0; i < size2; i++) {
		char randLetter = rand() % 26 + 'A';
		pchs2[i] = randLetter;
	}

	printCharArray(pchs, size);
	printCharArray(pchs2, size2);
	if (bAddArrays(pchs, size, pchs2, size2)) {
		cout << "LET'S GO!" << "\n";
		printCharArray(pchs, size);
	}
	

	
	cout << "Size 1 after concatenation: " << size << "\nSize2: " << size2 << "\n";
	//cout << *pchs << *pchs2;
	return 0;
}