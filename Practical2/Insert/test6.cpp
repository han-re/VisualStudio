#include <iostream>
using namespace std;

bool bInsert(int*& pi, int& size, int pos, int val) {

	if (pos < 0 || pos > size) {
		return false;
	}

	size++;

	int* temp_arr = new int[size];
	
	for (int i = 0; i < pos; i++) {
		temp_arr[i] = pi[i];
	}

	temp_arr[pos] = val;

	for (int i = pos; i < size - 1; i++) {
		temp_arr[i + 1] = pi[i];
	}

	delete[] pi;
	pi = temp_arr;

	return true;
}

int main()
{
	// the array before insertion
	int size = 0;
	int* pi = NULL;
	// insert 10 40s at the end of the array
	for (int i = 0; i < 10; i++) {
		if (!bInsert(pi, size, i, 40)) {
			cout << "Insertion fails" << endl;
			return 1;
		}
	}
	// print the array
	for (int i = 0; i < size; i++)
		cout << pi[i] << " ";
	cout << endl;
	// insert a value 0 at position 3
	if (!bInsert(pi, size, 3, 0)) {
		cout << "Insertion fails" << endl;
		return 1;
	}
	// print the array
	for (int i = 0; i < size; i++)
		cout << pi[i] << " ";
	cout << endl;
	// delete array
	delete[] pi;
	return 0;
}