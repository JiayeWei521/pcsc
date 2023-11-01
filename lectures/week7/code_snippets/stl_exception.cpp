#include <exception>
#include <iostream>

void foo() { throw std::runtime_error("my message"); }

int main() {
  try {
    foo();
  } catch (const std::runtime_error &e) {
    std::cout << e.what() << std::endl;
  }
}