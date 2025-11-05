#include "iStack.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));

	//iStack s1;
	//for (int i = 0; i < 100; i++) {
	//	s1.push(rand() % 10);
	//}

	//s1.print();
	//cout << endl;
	//cout << "Stack Size: " << s1.size() << endl;
	//cout << s1.pTop() << endl;

	//cout << s1.search(5) << endl;
	//cout << s1.search(20) << endl;

	iStack* s1 = new iStack;

	for (int i = 0; i < 100; i++) {
		s1->push(rand() % 10);
	}

	s1->print();
	cout << "Stack size: " << s1->size() << endl;

	cout << s1->search(5) << endl;
	cout << s1->search(20) << endl;

	delete s1;
	return 0;
}