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
        bigint bi1(3);

        // Test 
        bi1 = bi1.times10(0);

        // Verify
        assert(bi1 == 3);  // Corrected the expected result to 3
    }

    {
        // Additional test cases

        // Test case for times_10(1)
        bigint bi2(5);
        bi2 = bi2.times10(1);
        assert(bi2 == 50);

        // Test case for times_10(2)
        bigint bi3(7);
        bi3 = bi3.times10(2);
        assert(bi3 == 700);

        // Add more test cases as needed.
    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

