/*
* Benjamin Ward
* bigint.cpp
* CS23001
* 02/12/24
*/
#include "bigint.hpp"
#include <iostream>
#include <cassert>

void bigint::initializeArray() { // sets all elements of numArray to zero
   
       	for (int i = 0; i < CAPACITY; ++i) {
        numArray[i] = 0; // numArray is an array of integers to store the digits of the large integers
    }
}

bigint::bigint() { 
    initializeArray(); // initializes all elements of numArray to zero
}

bigint::bigint(int numbers) { // constructor that converts an int into a bigint
    initializeArray();
   
    int i = 0;
    while (numbers > 0) { // extracts digits from int and stores them in the array
        numArray[i] = numbers % 10;
        numbers = numbers / 10;
        i++;
    }
}

bigint::bigint(const char charArray[]) { // constructor to convert a character array into a bigint
    initializeArray();
    	
    	int arrayLength = 0;
	for (; charArray[arrayLength] != '\0'; ++arrayLength) // finds the length of the char array

    	for (int i = 0; i < arrayLength; ++i) { // converts char to int and stores them in reverse order
        	numArray[i] = charArray[arrayLength - 1 - i] - '0';
    }
}

void bigint::debugPrint(std::ostream& out) const { // debug print function to display the contents of the bigint array
    
	for (int i = CAPACITY - 1; i >= 0; --i) {
     		out << numArray[i] << "|"; // // prints the content of numArray in reverse order seperated by "|"
    }
    

    out << std::endl;
}

std::ostream& operator<<(std::ostream& out, const bigint& obj) { // overloaded output stream operator to print the large int
    
	int i = CAPACITY - 1;
	while (i >= 0 && obj.numArray[i] == 0)
        --i;

    int count = 0;
    for (; i >= 0; --i) {
    	out << obj.numArray[i];

       	 if (++count % 80 == 0) // inserts a newline after every 80 characters
         	out << std::endl;
    }

    if (count == 0)
    	out << '0';

    return out;
}

std::istream& operator>>(std::istream& in, bigint& obj) { // overloaded input stream to read the large int from input
   
    obj.initializeArray();

    char ch; // declares character variable ch and it is used to read characters from istream
    int i = 0; // declares and initializes an integer variable i to zero

    while (in >> ch && ch != ';') { // reads characters from the istream until a semicolon is encountered

        if (ch >= '0' && ch <= '9') {

            for (int n = i; n > 0; --n) {
                obj.numArray[n] = obj.numArray[n - 1];
            }

            obj.numArray[0] = ch - '0'; // converts the char to int, then stores at the beginning
            ++i;
        }
    }

    return in; // returns the input stream in
}

bool bigint::operator==(const bigint& obj) const { // overloaded equality operator to compare two bigint objects
   
       	for (int i = 0; i < CAPACITY; ++i) {
        
	    if (numArray[i] != obj.numArray[i])
            	return false; 
    }

    return true;
}

bigint bigint::operator+(const bigint& obj) const { // overloaded addition operator to perform addition of two bigint objects
    bigint result;
    int carry = 0;

    for (int i = 0; i < CAPACITY; ++i) {
        int sum = numArray[i] + obj.numArray[i] + carry; 
        result.numArray[i] = sum % 10; // stores the single digit
        carry = sum / 10; // calculates for the next digit
    }

    return result; // returns result, which contains the sum of two bigint objects
}

int bigint::operator[](int index) const { // overloaded subscript operator to access individual digits of the large int
    
	if (index < 0 || index >= CAPACITY) { // checks if the value of index is less than or equal to CAPACITY; if true, the function returns zero
        return 0; 
    }

    return numArray[index];
}

