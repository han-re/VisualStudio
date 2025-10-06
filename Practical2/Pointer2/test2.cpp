#include <iostream>
using namespace std;

double* pCubeX(double x) {
	return new double(x * x * x);
}

int main() {
	double* px = pCubeX(3.0);
	cout << *px << "\n";	
	cout << *px << "\n";
	return 0;
}