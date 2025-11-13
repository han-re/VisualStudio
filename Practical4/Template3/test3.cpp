#include "Stack.h"
#include <iostream>

int main() {

	Stack<int> a;
	Stack<int> b;

	Stack<int> c; // Creating a new stack that isn't the same as stack a & b to test if when both stacks aren't the same it outputs an error message.

	for (int i = 1; i <= 5; i++) {
		a.push(i);
		b.push(i);
	}

	for (int i = 1; i <= 10; i++) {
		c.push(i);
	}

	a.print();

	if (a == b) {
		cout << "Stack 1 & Stack 2 are the same" << endl;
	}
	else {
		cout << "Stack 1 & Stack 2 aren't the same" << endl;
	}

	if (a == c) {
		cout << "Stack 1 & Stack 2 are the same" << endl;
	}
	else {
		cout << "Stack 1 & Stack 2 aren't the same" << endl;
	}

	return 0;
}