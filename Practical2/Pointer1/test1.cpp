#include <iostream>

using namespace std;

int main() {
	int i = 27;
	int* pi = &i;

	cout << "Value of i is: " << i << "\n";
	cout << "Value of pi(pointer) is: " << pi << "\n";
	cout << "Value that pi is dereferencing: " << *pi << "\n";

	*pi = 35;
	cout << "Value of i is: " << i << "\n";
	*pi = *pi * 2;
	cout << "Value of i is: " << i << "\n";

	double* pd = NULL; // Always initialise pointer to NULL
	cout << "Value of pd is: " << pd << "\n";
	// cout << "value pd is pointing to is" << *pd;
		// program crashes because you try to dereference NULL
		// NULL is not a valid memory address
		// comment the above line to continue the test below

	int* px = NULL;
	int x = 10;
	px = &x;
	cout << "Value of px: " << *px << "\n";

	return 0;


}	