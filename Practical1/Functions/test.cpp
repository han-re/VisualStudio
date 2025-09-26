#include "myFunctions.h"
#include <iostream>

using namespace std;

int main1() {
	cout << iAdd(12, 13) << "\n";

	cout << divideXbyY(1, 2) << "\n";
	cout << divideXbyY(1.0, 2.0) << "\n";
	cout << divideXbyY(16.0, 2.0) << "\n";
	cout << Log(7.0) << "\n";
	cout << Sqrt(36) << "\n";

	int i, j, k;
	cout << "Enter your first number: ";
	cin >> i;
	cout << "Enter your second number: ";
	cin >> j;
	cout << "Enter your third number: ";
	cin >> k;
	sortPrint(i, j, k);

	cout << "\n" << "Bubble Sort" << "\n";


	int m, n, o;
	cout << "Enter your first number: ";
	cin >> m;
	cout << "Enter your second number: ";
	cin >> n;
	cout << "Enter your third number: ";
	cin >> o;
	bubbleSort(m, n, o);

	return 0;
}