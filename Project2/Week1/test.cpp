#include "myFunctions.h" // user-defined class, included using ""
#include <iostream> // system i/o class, included using <>
using namespace std;
int main5()
{
	// cout: print results to screen
	cout << iAdd(12, 13) << "\n"; // newline operator
	cout << divideXbyY(1, 2) << endl; // newline operator
	cout << divideXbyY(1.0, 2.0) << endl;
	cout << divideXbyY(16.0, 0.0) << endl;
	return 0;
}