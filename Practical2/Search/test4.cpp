#include <iostream>
#include <ctime>
using namespace std;

/*Steps 
1. How do I iterate from the first element to the last one?
I can iterate using a for loop from the first to the last element

2. What does the loop condition look like?
Maybe I'd have to check the first element with the rest of the elements using index numbers
then continue with the second, third, fourth .... etc. Create a counter for each element that's
the same

Or I could do it individually where I create an if statement for each letter and if it's in the 
array I could increase a counter. But that is very tedious. 

Array Indexing = arr[i]
Pointer Arithmetic = *(arr + i) */

int search_arr_indexing(char* pchs, int size, char key) {

	int count = 0;
	for (int i = 0; i < size; i++) {
		if (pchs[i] == key) {
			count++;
		}
	}
	return count;
}

int search_pointer_arithmetic(char* pchs, int size, char key) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(pchs + i) == key) {
			count++;
		}
	}
	return count;

}

int main() {
	int arr_size;
	char letter;
	cout << "How big do you want you want the array to be?: " << "\n";
	cin >> arr_size;
	cout << "What letter do you want to search for?: " << "\n";
	cin >> letter;

	char* arr = new char[arr_size];
	srand(time(0));

	
	int i = 0;
	for (i = 0; i < arr_size; i++) {
		char ch = 97 + rand() % 26;
		arr[i] = ch;
	}
	cout << "List of Random Letters: ";
	for (i = 0; i < arr_size; i++) {
		cout << arr[i];
	}

	cout << "\n" << "Array Indexing Search: " << search_arr_indexing(arr, arr_size, letter) << "\n";
	cout << "Pointer Arithmetic Search: " << search_pointer_arithmetic(arr, arr_size, letter) << "\n";

	return 0;

	delete[]arr;

		
}