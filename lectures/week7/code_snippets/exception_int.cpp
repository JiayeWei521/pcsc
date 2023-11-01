#include <cmath>
#include <iostream>

double mysqrt(double x) {
  if (x < 0)
    throw(-1);
  return std::sqrt(x);
}

int main() {
  try {
    mysqrt(-1);
  } catch (int i) {
    std::cout << "Code: " << i << std::endl;
  }
}