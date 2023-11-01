#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<double> v(10);
  std::iota(v.begin(), v.end(), 0);
  std::for_each(v.begin(), v.end(), [](double &x) { x = x * x; });
  std::for_each(v.begin(), v.end(),
                [](double x) { std::cout << x << std::endl; });
}