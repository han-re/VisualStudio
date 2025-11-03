#ifndef XCLASS_H
#define XCLASS_H

#include <iostream>

class xClass {
private:
    int* data;  // pointer to data array
    int size;   // size of data array

public:
    // Constructor
    xClass(int length, int max_val);

    // Destructor
    ~xClass();

    // Print array data
    void print_data() const;

    // Average of data
    int ave_data() const;

    // Value at specific index
    int data_at(int i) const;

    // Range of data (max - min)
    int range_data(int min, int max) const;

    // Copy constructor
    xClass(const xClass& b);

    // Overloaded += operator
    void operator += (const xClass& b);
};

#endif
