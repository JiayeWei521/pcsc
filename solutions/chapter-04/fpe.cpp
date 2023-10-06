/* -------------------------------------------------------------------------- */
#include <cassert>
#include <iostream>
/* -------------------------------------------------------------------------- */

int divint(int a, int b) {
  // secure the division with an explanatory message
  if (b == 0) {
    std::cerr << "Error: cannot divide by 0" << std::endl;
    assert(b != 0);
  }
  return a / b;
}

/* -------------------------------------------------------------------------- */

int main() {
  int x1 = 5, y1 = 2;
  std::cout << divint(x1, y1) << std::endl;

  int x2 = 3, y2 = 0;
  int res = divint(x2, y2);
  std::cout << res << std::endl;

  return 0;
}

/* -------------------------------------------------------------------------- */
