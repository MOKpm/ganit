// basic_operations.cpp
#include "ganit/basic_operations.hpp"
#include <vector>
#include <stdexcept>

namespace ganit {

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int vec_add(const std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

double vec_add(const std::vector<double>& vec) {
    double sum = 0;
    for (double num : vec) {
        sum += num;
    }
    return sum;
}

int sub(int a, int b) {
    return a - b;
}

double sub(double a, double b) {
    return a - b;
}

int vec_sub(const std::vector<int>& vec) {
    int diff = 0;
    for (int num : vec) {
        diff -= num;
    }
    return diff;
}

double vec_sub(const std::vector<double>& vec) {
    double diff = 0;
    for (double num : vec) {
        diff -= num;
    }
    return diff;
}

int dot(int a, int b) {
    return a * b;
}

double dot(double a, double b) {
    return a * b;
}

int vec_dot(const std::vector<int>& vec) {
    int dot = 1; // Initialize to 1 for multiplication
    for (int num : vec) {
        dot *= num;
    }
    return dot;
}

double vec_dot(const std::vector<double>& vec) {
    double dot = 1; // Initialize to 1 for multiplication
    for (double num : vec) {
        dot *= num;
    }
    return dot;
}

int div(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

double div(double a, double b) {
    if (b == 0.0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

int modulusInt(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Modulus by zero");
    }
    return a % b;
}

double modulusFloat(double a, double b) {
    if (b == 0.0) {
        throw std::invalid_argument("Modulus by zero");
    }
    double quotient = a / b;
    return a - static_cast<int>(quotient) * b;
}

} // namespace ganit
