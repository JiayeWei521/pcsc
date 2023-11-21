/*
 * standard_algorithms.cpp
 *
 * STL exercise 4: standard algorithms
 *
 * Created on: Nov 15, 2023
 *      Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

void print_vector(std::vector<double> &v) {
    for (double x : v)
        std::cout << x << " ";
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    unsigned int n = 100;
    std::vector<double> v(n);

    // Fill the vector with zeros
    std::fill(v.begin(), v.end(), 0);

    // Check the expected results with a range-for loop
//    for (auto i : v)
//    {
//        std::cout << i << std::endl;
//    }

    // std::iota algorithm
    std::iota(v.begin(), v.end(), 1);
    // Check the expected results with a range-for loop
//    for (auto i : v)
//    {
//        std::cout << i << std::endl;
//    }

    // Create a lambda function that takes a reference to double as an argument and squares it
    auto f_lambda = [](double& x) { return x *= x; };

    double a = 2.0;
    std::cout << "The square of 2 computed by the lambda function is " << f_lambda(a) << "\n" << std::endl;

    // Using a range-for loop, apply this lambda to the previously initialized vector. Check the expected result.
    std::cout << "Apply this lambda function to our previous vector, we get: " << std::endl;
    for (auto &element : v)
    {
        std::cout << f_lambda(element) << std::endl;
    }

    // [resetting values]
    std::iota(v.begin(), v.end(), 1);

    // std::for_each algorithm
    std::for_each(v.begin(), v.end(), f_lambda);
    print_vector(v);

    // Compute the sum of all elements in the vector
    double sum = 0.0;
    auto f_sum = [&sum](double& a){ sum +=a;};

    std::for_each(v.begin(), v.end(), f_sum);
    std::cout << "The sum computed by the for_each loop is " << sum << "\n" << std::endl;

    double sum_formula = n * (n+1) * (2*n + 1) / 6.0;
    std::cout << "The sum computed by the formula is " << sum_formula << std::endl;

    // std::accumulate
    double sum_accumulate = std::accumulate(v.begin(), v.end(), 0.0);
    std::cout << "The sum computed by the accumulate method is " << sum_accumulate << std::endl;

    // Finally with the same vector containing squares of natural numbers
    double pi_approximated = 0.0;
    auto f_sum_inverse = [&pi_approximated](double& a){ pi_approximated += 1/a;};
    std::for_each(v.begin(), v.end(), f_sum_inverse);
    pi_approximated = sqrt( pi_approximated * 6 );

    std::cout << "The approximate value of pi is " << pi_approximated << "\n" << std::endl;
}

