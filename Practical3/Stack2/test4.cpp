#include "iStack.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {

	srand(time(0));

	iStack s1;
	string sequence;
	int input;

	cout << "Enter a sequence of numbers, ending with *\n Please make sure it's separated by spaces" << endl;


	while (true) {

		cin >> sequence; //looping through the input until we find the asterisk

		if (sequence == "*") {
			break;
		}

		input = stoi(sequence);
		cout << input << " " << endl;

		s1.push(input);
	}

	cout << endl;

	cout << "Reversed Order: ";
	s1.print();

	//int reverse()


	return 0;
}