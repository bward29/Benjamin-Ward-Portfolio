// bigint Test Program
//
// Tests: multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main() {
    // Test Case 1
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left * right;

        // Verify
        assert(left == 0);
        assert(right == 0);
        assert(result == 0);
    }

    // Test Case 3
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;

        // Test 
        result = left * right;

        // Verify
        assert(left == 0);
        assert(right == 1);
        assert(result == 0);
    }
    std::cout << "Done testing multiply" << std::endl;
    return 0;
}
