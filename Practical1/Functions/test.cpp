#include "myFunctions.h"
#include <iostream>

using namespace std;

int main() {
	cout << iAdd(12, 13) << "\n";

	cout << divideXbyY(1, 2) << "\n";
	cout << divideXbyY(1.0, 2.0) << "\n";
	cout << divideXbyY(16.0, 2.0) << "\n";
	cout << Log(7.0) << "\n";
	cout << Sqrt(36) << "\n";
	sortPrint(2, 5, 4);

	return 0;
}