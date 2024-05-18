#include <iostream>
#include "ganit/basic_operations.hpp"

int main() {
    using namespace ganit;

    // Test integer addition
    int int_result = add(3, 4);
    std::cout << "3 + 4 = " << int_result << std::endl;

    // Test floating-point addition
    double double_result = add(3.5, 4.2);
    std::cout << "3.5 + 4.2 = " << double_result << std::endl;

    return 0;
}
