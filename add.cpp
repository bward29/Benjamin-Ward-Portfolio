/*
* NAME: Benjamin Ward
* FILE: add.cpp
* COURSE: CS23001
* DATE: 02/19/24
*/
#include <iostream>
#include <fstream>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");
    if (!in) {
        std::cerr << "File not found: data1-1.txt" << std::endl;
        return 0;
    }

    bigint bigint1, bigint2, sum;

    while (in >> bigint1) {
		    in.ignore();

		    if (! (in >> bigint2)) {
			    std::cerr << "Unable to read bigint2" << std::endl;
			    return 0;
		    }

		    std::cout << "bigint 1: " << bigint1 << "\n";
		    std::cout << "bigint 2: " << bigint2 << "\n";

		    sum = bigint1 + bigint2;

		    std::cout << "Sum: " << sum << "\n\n";

		    in.ignore();
    }

    in.close();
    return 0;

}

