#pragma once
class iArray
{
private:
    int size;
    int* data;

public:
    iArray(int n) {
        size = n;
        data = new int[size];
    }

    // destructor to free the allocated memory
    ~iArray();


    // generate n random numbers between 0 and provided limit
    void fillArray(int limit, int n);

    // print the array in one-line on the console separated with space
    void print();

    // count the number of occurrences of x
    int countOccurrence(int x);

    // reverse the array element
    int iReverseArrayElement();
};