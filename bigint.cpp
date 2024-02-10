/*
* Benjamin Ward
* bigint.cpp
* CS23001
* 02/12/24
*/
#include "bigint.hpp"
#include <iostream>
#include <cassert>

bigint::bigint() { //Initializes numArray to all zeros
    for (int i = 0; i < CAPACITY; ++i) {
        numArray[i] = 0; 
    }
}

bigint::bigint(int numbers):bigint() { //Converts 'numbers' into a 'bigint'
    int i = 0;

    while (numbers > 0) {
        numArray[i] = numbers % 10;
        numbers = numbers / 10;
        i++;
    }
}

bigint::bigint(const char characters[]):bigint() { //Converts each character to an int
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

std::istream& operator>>(std::istream& in, bigint& obj) {
	in >> obj.numArray[0];
		return in;
		char array[CAPACITY];
		char next;
		in >> next;
		int i = 0;

			for (; i < CAPACITY; i++) {
				if (next == ';') {
				       	break;
				}
				
				else {
					array[i] = next;
					in >> next;
				}
				
			}	

	array[i] = 0; 
	obj = bigint(array); 
	return in;
}


bool bigint::operator==(const bigint& obj) {
    for (int i = 0; i < CAPACITY; ++i) {
        if (numArray[i] != obj.numArray[i])
	   return false; //Returns false if any elements are not equal
	}
    return true; //Returns true if all elements are equal
	}

bigint bigint::operator+(bigint obj) const {
	bigint result;
	int carry = 0;
	for (int i = 0; i < CAPACITY; i++) {
		int sum = numArray[i] + obj.numArray[i] + carry;
		result.numArray[i] = sum % 10;
		carry = sum / 10;
	}
	return result;
}
int bigint::operator[](int i) const {
	return numArray[i];
}

