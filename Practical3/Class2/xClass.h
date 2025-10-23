#ifndef XCLASS_H
#define XCLASS_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

class xClass {
 

	private:
		int* data; // pointer to data array
		int size; // size of data array

	public:

		xClass(int length, int max_val)
			: size(length) {
			data = new int[size];

			for (int i = 0; i < size; i++) {
				data[i] = std::rand() % (max_val);
			}
		}

		~xClass() {
			delete[] data;
		}

		void print_data() const{
			
			cout << "Array: ";
			for (int i = 0; i < size; i++) {
				cout << data[i];
			}
		}

		int ave_data() const {
			int count = 0;

			for (int i = 0; i < size; i++) {
				count += data[i];
			}

			if(count > 0){
				return -1;
			}

			else {
				return NULL;
			}
		}

		int data_at(int i) const {

			if (0 <= i < size) {
				return data[i];
			}
			else {
				return -1;
			}
		}

		xClass(const xClass& b) {
			size = b.size;
			data = new int[size];
			for (int i = 0; i < size; i++) {
				data[i] = b.data[i];
			}
		}

		void operator += (const xClass& b) {
			
			//1. create new array 2. have size dynamically allocated to size of a +b 
			//3. add all a original elements 4. append b elements
			//5. delete old array 6. point it to same memory address
			//a += b

			int newSize = b.size + size;

			int* newData = new int[b.size + size];

			for (int i = 0; i < size; i++) {
				newData[i] = data[i];
			}
			for (int i = 0; i < newSize; i++) {
				newData[size + i] = b.data[i];
			}

			delete[] data;

			data = newData;
			size = newSize;

		}
};



#endif
