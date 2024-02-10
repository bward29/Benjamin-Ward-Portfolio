#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in;
    in.open("data1-1.txt");
    if (!in) {
        std::cerr << "File not found: data-1-1.txt" << std::endl;
        exit(1);
    }

    bigint bigint1;
    bigint bigint2;
    
    while (in >> bigint1 >> bigint2) {
        std::cout << bigint1 << "\n" << bigint2 << "\n";

        bigint sum = bigint1 + bigint2;
        std::cout << "sum: " << sum << "\n";
    }

    in.close();
    return 0;
}
