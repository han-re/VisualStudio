#include <iostream>

using namespace std;

// prints squares and cubes of first 5 integers > 0
// can you find the errors in the code?

int main4() {
	// print headings
	cout << "Value\t" << "Square\t" << "Cube\n";
	cout << "~~~~~\t" << "~~~~~~\t" << "~~~~\n";

	// calculate and output values
	int value, square, cube;
	for (int count = 1; count < 5; count++) {
		value = count;
		square = value * value;
		cube = value * value * value;
		cout << value << "\t" << square << "\t" << cube << "\n";
	}

	return 0;
}