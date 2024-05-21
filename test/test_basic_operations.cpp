#include <iostream>
#include <vector>
#include "ganit/basic_operations.hpp"

int main() {
    // Examples of using the methods defined in basic_operations.hpp

    // Addition
    int sum_int = ganit::add(5, 3);
    double sum_double = ganit::add(2.5, 3.7);
    std::cout << "Sum (int): " << sum_int << std::endl;
    std::cout << "Sum (double): " << sum_double << std::endl;

    // Vector addition
    std::vector<int> vec_int{1, 2, 3, 4, 5};
    int vec_sum_int = ganit::vec_add(vec_int);
    std::cout << "Vector Sum (int): " << vec_sum_int << std::endl;

    std::vector<double> vec_double{1.1, 2.2, 3.3, 4.4, 5.5};
    double vec_sum_double = ganit::vec_add(vec_double);
    std::cout << "Vector Sum (double): " << vec_sum_double << std::endl;

    // Subtraction
    int diff_int = ganit::sub(5, 3);
    double diff_double = ganit::sub(7.5, 3.2);
    std::cout << "Difference (int): " << diff_int << std::endl;
    std::cout << "Difference (double): " << diff_double << std::endl;

    // Vector subtraction
    int vec_diff_int = ganit::vec_sub(vec_int);
    std::cout << "Vector Difference (int): " << vec_diff_int << std::endl;

    double vec_diff_double = ganit::vec_sub(vec_double);
    std::cout << "Vector Difference (double): " << vec_diff_double << std::endl;

    // Multiplication
    int product_int = ganit::cross(5, 3);
    double product_double = ganit::cross(2.5, 3.7);
    std::cout << "Product (int): " << product_int << std::endl;
    std::cout << "Product (double): " << product_double << std::endl;

    // Vector multiplication
    int vec_product_int = ganit::vec_cross(vec_int);
    std::cout << "Vector Product (int): " << vec_product_int << std::endl;

    double vec_product_double = ganit::vec_cross(vec_double);
    std::cout << "Vector Product (double): " << vec_product_double << std::endl;

    // Division
    int div_int = ganit::div(10, 2);
    double div_double = ganit::div(8.0, 2.0);
    std::cout << "Division (int): " << div_int << std::endl;
    std::cout << "Division (double): " << div_double << std::endl;

    // Modulus
    int mod_int = ganit::modulus(10, 3);
    double mod_double = ganit::modulus(8.0, 2.5);
    std::cout << "Modulus (int): " << mod_int << std::endl;
    std::cout << "Modulus (double): " << mod_double << std::endl;

    // Exponential functions
    double exp_val = ganit::exp(2.0);
    std::cout << "exp(2.0): " << exp_val << std::endl;

    // Logarithmic functions
    double log_val = ganit::log(10.0);
    std::cout << "log(10.0): " << log_val << std::endl;

    double log10_val = ganit::log10(100.0);
    std::cout << "log10(100.0): " << log10_val << std::endl;

    double logx_val = ganit::logx(2.0, 8.0);
    std::cout << "log2(8.0): " << logx_val << std::endl;

    // Power functions
    double pow_val = ganit::pow(2.0, 3.0);
    std::cout << "2.0 ^ 3.0: " << pow_val << std::endl;

    // Square root functions
    double sqrt_val = ganit::root2(16.0);
    std::cout << "Square root of 16.0: " << sqrt_val << std::endl;

    double cbrt_val = ganit::root3(27.0);
    std::cout << "Cube root of 27.0: " << cbrt_val << std::endl;

    double root_val = ganit::rootx(16.0, 4);
    std::cout << "Fourth root of 16.0: " << root_val << std::endl;

    // Trigonometric functions
    double sin_val = ganit::sin(ganit::to_radians(30)); // Calculate sin(30 degrees)
    std::cout << "Sin(30 degrees): " << sin_val << std::endl;

    double cos_val = ganit::cos(ganit::to_radians(60)); // Calculate cos(60 degrees)
    std::cout << "Cos(60 degrees): " << cos_val << std::endl;

    double tan_val = ganit::tan(ganit::to_radians(45)); // Calculate tan(45 degrees)
    std::cout << "Tan(45 degrees): " << tan_val << std::endl;

    double asin_val = ganit::asin(0.5); // Calculate arcsin(0.5)
    std::cout << "Arcsin(0.5): " << asin_val << std::endl;

    double acos_val = ganit::acos(0.5); // Calculate arccos(0.5)
    std::cout << "Arccos(0.5): " << acos_val << std::endl;

    double atan_val = ganit::atan(1); // Calculate arctan(1)
    std::cout << "Arctan(1): " << atan_val << std::endl;

    double sinh_val = ganit::sinh(1); // Calculate hyperbolic sin(1)
    std::cout << "sinh(1): " << sinh_val << std::endl;

    double cosh_val = ganit::cosh(1); // Calculate hyperbolic cos(1)
    std::cout << "cosh(1): " << cosh_val << std::endl;

    double tanh_val = ganit::tanh(1); // Calculate hyperbolic tan(1)
    std::cout << "tanh(1): " << tanh_val << std::endl;

    double asinh_val = ganit::asinh(1); // Calculate hyperbolic arcsin(1)
    std::cout << "asinh(1): " << asinh_val << std::endl;

    double acosh_val = ganit::acosh(2); //
    std::cout << "acosh(2): " << acosh_val << std::endl;

    double atanh_val = ganit::atanh(0.5); // Calculate hyperbolic arctan(0.5)
    std::cout << "atanh(0.5): " << atanh_val << std::endl;

    // Conversion functions
    double degrees = 90.0;
    double radians = ganit::to_radians(degrees);
    std::cout << "90 degrees in radians: " << radians << std::endl;

    double radians2 = ganit::to_radians(180.0);
    std::cout << "180 degrees in radians: " << radians2 << std::endl;

    double degrees2 = ganit::to_degrees(1.57);
    std::cout << "1.57 radians in degrees: " << degrees2 << std::endl;

    double degrees3 = ganit::to_degrees(3.14);
    std::cout << "3.14 radians in degrees: " << degrees3 << std::endl;

    return 0;
}
