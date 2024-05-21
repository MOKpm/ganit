#include <iostream>
#include <vector>
#include "ganit/basic_operations.hpp"

int main() {
    using namespace ganit;

    // Test addition
    int int_result = add(3, 4);
    std::cout << "3 + 4 = " << int_result << std::endl;

    double double_result = add(3.5, 4.2);
    std::cout << "3.5 + 4.2 = " << double_result << std::endl;

    // Test vector addition
    std::vector<int> int_vec = {1, 2, 3, 4};
    int int_vec_result = vec_add(int_vec);
    std::cout << "Sum of {1, 2, 3, 4} = " << int_vec_result << std::endl;

    std::vector<double> double_vec = {1.1, 2.2, 3.3, 4.4};
    double double_vec_result = vec_add(double_vec);
    std::cout << "Sum of {1.1, 2.2, 3.3, 4.4} = " << double_vec_result << std::endl;

    // Test subtraction
    int_result = sub(7, 4);
    std::cout << "7 - 4 = " << int_result << std::endl;

    double_result = sub(7.5, 2.2);
    std::cout << "7.5 - 2.2 = " << double_result << std::endl;

    // Test vector subtraction
    int_vec_result = vec_sub(int_vec);
    std::cout << "Subtraction of {1, 2, 3, 4} from 0 = " << int_vec_result << std::endl;

    double_vec_result = vec_sub(double_vec);
    std::cout << "Subtraction of {1.1, 2.2, 3.3, 4.4} from 0 = " << double_vec_result << std::endl;

    // Test dot product
    int_result = cross(3, 4);
    std::cout << "3 * 4 = " << int_result << std::endl;

    double_result = cross(3.5, 4.2);
    std::cout << "3.5 * 4.2 = " << double_result << std::endl;

    // Test vector dot product
    int_vec_result = vec_cross(int_vec);
    std::cout << "Dot product of {1, 2, 3, 4} = " << int_vec_result << std::endl;

    double_vec_result = vec_cross(double_vec);
    std::cout << "Dot product of {1.1, 2.2, 3.3, 4.4} = " << double_vec_result << std::endl;

    // Test division
    int_result = ganit::div(8, 2);
    std::cout << "8 / 2 = " << int_result << std::endl;

    double_result = ganit::div(7.5, 2.5);
    std::cout << "7.5 / 2.5 = " << double_result << std::endl;

    // Test modulus
    int_result = modulus(10, 3);
    std::cout << "10 % 3 = " << int_result << std::endl;

    double_result = modulus(10.5, 3.2);
    std::cout << "10.5 % 3.2 = " << double_result << std::endl;

    return 0;
}
