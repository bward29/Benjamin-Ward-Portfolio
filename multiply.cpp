/*
* NAME: Benjamin Ward
* FILE: multiply.cpp
* COURSE: CS23001
* DATE: 02/26/24
*/

#include "bigint.hpp"
#include <fstream>
int main() {

    std::ifstream in("data1-2.txt");

    bigint bigint1, bigint2, sum;

    while (in >> bigint1 && in >> bigint2) {
	    std::cout << "bigint1: " << bigint1 << std::endl;
	    std::cout << "bigint2: " << bigint2 << std::endl;

	    sum= bigint1 * bigint2;

	    std::cout << "sum: " << sum << std::endl;
    }
    
    in.close();
    return 0;
}
