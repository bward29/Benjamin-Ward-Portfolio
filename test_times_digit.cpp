// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main() {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3 * 1);
    }

    {
        // Additional test cases

        // Test case for timesDigit(0)
        bigint bi2(7);
        bi2 = bi2.timesDigit(0);
        assert(bi2 == 0);

        // Test case for timesDigit(5)
        bigint bi3(4);
        bi3 = bi3.timesDigit(5);
        assert(bi3 == 4 * 5);

        // Add more test cases as needed.
    }

    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}

