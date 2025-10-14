#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person test("John", "Smith", "NYPD-2059", 2000);
	cout << test.get_birth_year();
	test.print();
	
	
	Person* test2 = new Person();
	test2->set_given_name("Ibra");
	test2->set_family_name("Himovic");
	test2->set_ID_number("NYPD-777");
	test2->set_birth_year(2005); // -> used to access member variables through a pointer. Basically automatically dereferences them and saves you having to do this instead - e.g (*test2).set_given_birth_name();
	
	test2->print();

	Person* test3 = new Person();
	test3->set_given_name("Zla");
	test3->set_family_name("Tan");
	test3->set_ID_number("NYPD-888");
	test3->set_birth_year(2005);
	return 0;
}
