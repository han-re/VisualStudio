#include <iostream>
using namespace std;

template < typename T>

bool bInsert(T*& pi, int& size, int pos, T val) {

	if (pos < 0 || pos > size) {
		cout << "pos is out of range" << endl;
		return false;
	}

	// new array size after insertion
	size++;

	// new array
	T* piNew = new T[size];
	if (piNew == NULL) {
		return false;
	}

	// copt pi to piNew & insert val
	for (int i = 0; i < pos; i++) {
		piNew[i] = pi[i];
	}

	piNew[pos] = val;

	for (int i = pos + 1; i < size; i++) {
		piNew[i] = pi[i - 1];
	}
	// delete old array
	delete[] pi;

	// point pi to the new array
	pi = piNew;
	return true;
}

template <typename U>
void print1(U arr, int size) {
	cout << "Array: [";
	for (int i = 0; i < size; i++) {

		cout << arr[i];
		if (i < size - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

int main() {

	double* arr = new double[5] {1.1, 2.2, 3.3, 4.4, 5.5};
	int size = 5;

	if (bInsert(arr, size, 3, 2.55)) {
		cout << "Worked!" << endl;

		print1(arr, size);
		
	}

	int newSize = 5;
	string* arr1 = new string[newSize]{ "abc", "def", "jkl", "mno", "pqr" };
	print1(arr1, newSize);
	

	if (bInsert(arr1, newSize, 2, string("ghi"))) {
		cout << "Worked!" << endl;
	}
	print1(arr1, newSize);


	delete[] arr;
	delete[] arr1 ;
	return 0;
}