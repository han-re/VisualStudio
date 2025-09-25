#include <iostream>
#include <string>

using namespace std;
// Example 3 - basic array manipulation
int main3() {
	// an array of ints - initialised
	int numbers[] = { 1,2,3,4,5 };
	
	// iterating through the array - printing values
	for (int index = 0; index <= 4; index++) {
		cout << numbers[index] ;
	}
	cout << endl;

	// another array of ints - what's the problem here? Different in Java?
	int values[5];
	for (int index = 0; index <= 4; index++) {
		cout << values[index];
	}
	cout << endl;

	// array of char
	char name[10];
	cout << "Enter Name: ";
	cin >> name; // what if too many characters entered?
	cout << "Hello, " << name << endl;
	return 0;
}