/*
* NAME:  Benjamin Ward
* FILE: bigint.hpp
* COURSE: CS23001
* DATE: 02/12/24
*/
#ifndef bigint_HPP
#define bigint_HPP

#include <iostream>
const int CAPACITY = 400;
class bigint {
public:

	void initializeArray();

	bigint();

	bigint(int);

	bigint(const char charArray[]);

	void debugPrint(std::ostream&) const;

	friend std::ostream& operator<<(std::ostream&, const bigint& obj);

	bool operator==(const bigint& obj) const;

	friend std::istream& operator>>(std::istream&, bigint& obj);

	bigint operator+(const bigint& obj) const;

	bigint timesDigit(int x) const;

	bigint times10(int x) const;

	bigint operator*(bigint& obj) const;

	int operator[](int) const;

private:

	int numArray[CAPACITY];
};
#endif
