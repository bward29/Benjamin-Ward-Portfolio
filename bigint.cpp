/*
  Benjamin Ward
* bigint.cpp
* CS23001
* 02/12/24
*/
#include "bigint.hpp"
#include <iostream>
#include <cassert>

void bigint::initialize() {
    for (int i = 0; i < CAPACITY; ++i) {
        numArray[i] = 0; //Initializes numArray to all zeros
    }
}

bigint::bigint() { //Default consstructor, (calls the 'initialize()' function to set all digits to zero
    initialize();
}

bigint::bigint(int numbers) { //Converts 'numbers' into a 'bigint'
    initialize();
    int i = 0;

    while (numbers > 0) {
        numArray[i] = numbers % 10;
        numbers = numbers / 10;
        i++;
    }
}

bigint::bigint(const char characters[]) { //Converts each character to an int
    initialize();
    int index = 0;

    for (; characters[index] != '\0'; ++index);

    for (int i = 0; i < index; ++i) {
        numArray[i] = characters[index - 1 - i] - '0'; 
    }
}

void bigint::debugPrint(std::ostream& out) const {
    for (int i = CAPACITY - 1; i >= 0; --i) {
        out << numArray[i] << "|"; //Prints the content of numArray in reverse order seperated by "|"
    }
    out << std::endl;
}

std::ostream& operator<<(std::ostream& out, const bigint& obj) {
    int i = CAPACITY - 1;
    while (i > 0 && obj.numArray[i] == 0) --i;
    int count = 0;
	for (; i >= 0; --i) {
	out << obj.numArray[i];
	if (++count % 80 == 0)
	out << std::endl; //Prints digits in reverse order and inserts a newline for every 80 characters
    }

    if (count == 0) out << '0';
    return out;
}

bool bigint::operator==(const bigint& obj) {
    for (int i = 0; i < CAPACITY; ++i) {
        if (numArray[i] != obj.numArray[i])
	   return false; //Returns false if any elements are not equal
	}
    return true; //Returns true if all elements are equal
	}
