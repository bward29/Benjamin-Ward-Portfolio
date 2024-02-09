// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"
//===========================================================================
int main() {

    {
        // Setup
        bigint bi(4);

        // Test
        int digit = bi[0];

        // Verify
        assert(bi == 4);
        assert(digit == 4);
    }

    // Add test cases
    {
        // Setup
        bigint bi(12345); // Assuming the digits are 1, 2, 3, 4, 5

        // Test
        int digit = bi[2]; // Retrieve the digit at position 2 (0-based index)

        // Verify
        assert(bi == 12345);
        assert(digit == 3);
    }

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}
