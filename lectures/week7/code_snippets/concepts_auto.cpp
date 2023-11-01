#include <iostream>
#include <type_traits>

template <typename T>
concept Number = std::is_arithmetic_v<T>;

template <typename T>
concept String =
    std::is_same_v<T, std::string> or std::is_same_v<T, const char *>;

void foo(Number auto n) { //
  std::cout << "Number: " << n << std::endl;
}

void foo(String auto n) { //
  std::cout << "String: " << n << std::endl;
}

int main() {
  foo(2);
  double e = 3.14;
  foo(e);
  foo("toto");
}