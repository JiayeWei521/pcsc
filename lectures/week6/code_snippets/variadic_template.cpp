#include <iostream>

template <typename T> T adder(T v) { return v; }

template <typename T, typename... Args>
// template ...Args is a variadic template
T adder(T first, Args... args) {
  return first + adder(args...);
}

int main() {
  std::cout << adder(1, 2, 3, 4) << "\n";
  std::cout << adder(1., 2., 3., 4.) << "\n";
  std::cout << adder(std::string("a"), std::string("b")) << "\n";
  std::cout << std::endl;
}