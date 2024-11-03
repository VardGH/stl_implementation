#include "is_same.hpp"
#include "enable_if.hpp"
#include "remove_reference.hpp"
#include "move.hpp"
#include "forward.hpp"

#include <iostream>

void test_is_same()
{
    // Test function for is_same
    static_assert(is_same<int, int>::value, "Failed: is_same<int, int>");
    static_assert(!is_same<int, float>::value, "Failed: is_same<int, float>");
    static_assert(is_same<const int, const int>::value, "Failed: is_same<const int, const int>");
    static_assert(!is_same<int&, int>::value, "Failed: is_same<int&, int>");
    static_assert(is_same<int&&, int&&>::value, "Failed: is_same<int&&, int&&>");

    std::cout << "All is_same tests passed!\n";
}

void test_enable_if() 
{
    // Test for enable_if<true>
    static_assert(is_same<enable_if<true>::type, void>::value, "Failed: enable_if<true>");

    std::cout << "All enable_if tests passed!\n";
}

void test_remove_reference()
{
    // Test for remove_reference
    static_assert(is_same<remove_reference<int>::type, int>::value, "Failed: remove_reference<int>");
    static_assert(is_same<remove_reference<int&>::type, int>::value, "Failed: remove_reference<int&>");
    static_assert(is_same<remove_reference<int&&>::type, int>::value, "Failed: remove_reference<int&&>");
    static_assert(is_same<remove_reference<const int&>::type, const int>::value, "Failed: remove_reference<const int&>");
    
    std::cout << "All remove_reference tests passed!\n";
}

void test_move()
{
    // Test for move
    int x = 13;
    int&& rx = move(x);
    static_assert(is_same<decltype(rx), int&&>::value, "Failed: move<int>");
    
    std::cout << "All move tests passed!\n";
}