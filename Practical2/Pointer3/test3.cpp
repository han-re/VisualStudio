#include <iostream>
#include <ctime>
using namespace std;

void mul_div(double& first, double& second) {
	
	double temp = first * second;
	second = first / second;
	first = temp;
}

double a = 10, b = 20;

void mul_div2(double* first, double* second) {

	double temp = *first * *second;
	*second = *first / *second;
	*first = temp;
	cout << "First: " << *first << " Second: " << *second;
}

/*int mainzero() {
	mul_div(a, b);
	cout << "First: " << a << " Second: " << b;
	return 0;
} */

int main() {
	srand(time(0));
	double c = (rand() / double(RAND_MAX)) * 5;
	double d = (rand() / double(RAND_MAX)) * 5;
	//double* ptr1 = &c;
	//double* ptr2 = &d;

	double e = 5.0;
	double f = 10.0;
	double* ptr1 = &e;
	double* ptr2 = &f;

	mul_div2(ptr1, ptr2);
	return 0;

} 