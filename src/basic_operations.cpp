#include "ganit/basic_operations.hpp"
#include <vector>
namespace ganit {

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add_vec( std::vector<int> &vec) {
   int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

double add_vec(std::vector<double> &vec) {
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

int add_sub( std::vector<int> &vec) {
   int diff = 0;
    for (int num : vec) {
        diff -= num;
    }
    return diff;
}

double add_sub(std::vector<double> &vec) {
    double diff = 0;
    for (double num : vec) {
        diff -= num;
    }
    return diff;
}


} 
