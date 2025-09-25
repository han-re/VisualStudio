#include <iostream>
#include <string>

// Example 2 - a program demonstrating basic input & output
using namespace std;

int main2() {
	// output a single item, followed by a new line <CR>
	cout << "Hello .." << endl;

	// output more than 1 item
	string name = "James";
	int age = 21;
	string address;

	cout << "Name: " << name << ", Age: " << age << endl;

	// read a single value
	cout << "Enter Name: ";
	cin >> name;
	cout << "Name Read: " << name << endl;

	// read multiple values
	cout << "Enter Name followed by Age:";
	cin >> name >> age;
	cout << "Name: " << name << ", Age: " << age << endl;

	// using getline - but there is a problem here!
	cout << "Enter address: ";
	getline(cin, address);
	cout << "Address: " << address << endl;

	return 0;
}