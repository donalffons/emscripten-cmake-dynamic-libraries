#include <iostream>
#include "a.h"
#include "b.h"

int main() {
    int result1 = add_numbers(5, 3);
    int result2 = multiply_and_add(4, 5, 2);
    
    std::cout << "Result from A: " << result1 << std::endl;
    std::cout << "Result from B: " << result2 << std::endl;
    
    return 0;
}