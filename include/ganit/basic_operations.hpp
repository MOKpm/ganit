#ifndef GANIT_BASIC_OPERATIONS_HPP
#define GANIT_BASIC_OPERATIONS_HPP

#include <vector>

namespace ganit {

int add(int a, int b);
double add(double a, double b);
int vec_add(const std::vector<int>& vec);
double vec_add(const std::vector<double>& vec);


int sub(int a, int b);
double sub(double a, double b);
int vec_sub(const std::vector<int>& vec);
double vec_sub(const std::vector<double>& vec);
} // namespace ganit

#endif // GANIT_BASIC_OPERATIONS_HPP
