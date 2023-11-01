#include <iostream>

void foo(int n) { std::cout << "Number: " << n << std::endl; }

void foo(double n) { std::cout << "Number: " << n << std::endl; }

void foo(std::string n) { std::cout << "String: " << n << std::endl; }

void foo(const char *n) { std::cout << "String: " << n << std::endl; }

int main() {
  double a = 3.14;
  int b = 2;
  foo(a);
  foo(b);
  foo("toto");
}