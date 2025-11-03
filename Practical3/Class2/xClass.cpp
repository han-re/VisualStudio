#include <iostream>
#include <ctime>

#include "xClass.h"

int main() {

	srand(time(0));

	xClass a(6, 20);
	a.print_data();

	return 0;
}