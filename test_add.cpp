// bigint Test Program
//
// 
//#include <iostream>
#include <cassert>
#include "bigint.hpp"
 


//===========================================================================
int main () {



    //------------------------------------------------------	
    // Setup fixture
    bigint left(0);
    bigint right(0);
    bigint result;
 
    // Test 
    result = left + right;
 
    // Verify
    assert(left   == 0);
    assert(right  == 0);
    assert(result == 0);
    {
    
    }
    //------------------------------------------------------
    // Setup fixture
    left = bigint(1);
    right = bigint(0);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 1);
    assert(right  == 0);
    assert(result == 1);
    {

    }
    //------------------------------------------------------
    // Setup fixture
    left = bigint(1);
    right = bigint(1);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 1);
    assert(right  == 1);
    assert(result == 2);
    {

    }
    //------------------------------------------------------
    // Setup fixture
    left = bigint(123);
    right = bigint(456);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 123);
    assert(right  == 456);
    assert(result == 579);
    {
    
    }
    //------------------------------------------------------
    // Setup fixture
    left = bigint(333);
    right = bigint(1111);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 333);
    assert(right  == 1111);
    assert(result == 1444);
    {

    }
    //------------------------------------------------------ 
    // Setup fixture
    left = bigint(123);
    right = bigint(11);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 123);
    assert(right  == 11);
    assert(result == 134);
    {

    }
    //------------------------------------------------------
    // Setup fixture
    left = bigint(799);
    right = bigint(98);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 799);
    assert(right  == 98);
    assert(result == 897);
    {

    }
    std::cout << "Last test!" << std::endl;
    //-----------------------------------------------------
    // Setup fixture
    left = bigint(234);
    right = bigint(166);
 
    // Test
    result = left + right;
 
    // Verify
    assert(left   == 234);
    assert(right  == 166);
    assert(result == 400);
 
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}
