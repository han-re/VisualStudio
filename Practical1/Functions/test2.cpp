#include "myFunctions.h"
#include <iostream>

using namespace std;

int main0() {

	double a, b, result;
	char op;
	string x = "";
	cout << "Input an equation to caluculate (e.g 5*5):" << "\n";
	cin >> a >> op >> b;

	result = myCalculator(a, op, b);

	cout << "Result: " << result << "\n";

	return 0;




}

int imain11() {
	// read N, R
	int N, R;
	cout << "Input N, R. The number and the range of random numbers to generate" << "\n";
	cin >> N >> R;
	// set the intital point for generating random numbers using current time. 
	// so each run will give you a different sequence of random numbers.
	// need to #include <ctime>
	srand(time(0));
	// generate N random numbers using rand() in the range [0, R-1] inclusive, and
	// calculate their sum
	int sum = 0;
	for (int n = 0; n < N; n++) {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	}
	// output the average of these numbers
	cout << "average = " << sum / N << endl;
	/* implement the above loop operation by using while, and do...while loops */
	cout << time(0);
	return 0;
}

int imain12() {
	int N, R;
	

	cout << "Enter N, R. The number and the range of random numbers to generate" << "\n";
	cin >> N >> R;
	srand(time(0));

	int sum = 0;
	int n = 0;
	while (n < N) {

		int rn = rand() % R;
		sum += rn;

		cout << rn << "\n";
		n++;
	}


	cout << "Average: " << sum / R;
	return 0;
}

// generate N random numbers using rand() in the range [0, R-1] inclusive, and
	// calculate their sum

int imain13() {
	int N, R;
	cout << "Insert N, R. The number and the range of random numbers to generate" << "\n"; 
	cin >> N >> R;

	srand(time(0));

	int n = 0;
	int sum = 0;

		do {
			int rn = rand() % R;
			sum += rn;
			n++;
			cout << rn << "\n";
		}
		while (n < N);


		cout << "Average: " << sum/R << "\n";
		return 0;
}

int main() {
	int num;
	int userGuess;
	int numGuess = 0;

	srand(time(0));
	num = rand() % 10;

		

	while (numGuess < 3) {

		cout << "Guess a number between 0-9: " << "\n";
		cin >> userGuess;

		if (userGuess == num) {
			cout << "Great! - You guessed correctly" << "\n";
			exit(0);
		}
		else {
			cout << "Bad Luck, Try again!" << "\n";
		}
		numGuess++;
	}
	return 0;
}