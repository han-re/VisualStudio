#include <iostream>
using namespace std;

void mul_div(double& first, double& second) {
	
	double temp = first * second;
	second = first / second;
	first = temp;
}

double a = 10;
double b = 20;


int main() {
	mul_div(a, b);
	cout << "First: " << a << " Second: " << b;
	return 0;
}