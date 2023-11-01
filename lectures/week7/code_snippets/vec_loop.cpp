#include <iostream>
#include <vector>

int main() {
  std::vector<double> vec(10);

  for (auto &p : vec) {
    std::cout << p;
  }

  for (auto &&p : vec) {
    std::cout << p;
  }
}