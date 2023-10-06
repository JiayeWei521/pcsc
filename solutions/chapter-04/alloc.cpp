#include <iostream>

int get_size();

void init(int array[]) {

  int size = get_size();

  // before the returned value was 30
  // with an allocated size of 10
  // => led to memory overflow!

  for (int i = 1; i < size; ++i) {
    array[i] = 0;
  }
}

// using a global variable for the
// array size prevents mismatch
// between allocation and access
const int array_size = 10;

int main(int argc, char *argv[]) {
  int size = array_size;
  int array[size];
  int a = 1234;

  std::cout << a << std::endl;
  init(array);
  std::cout << a << std::endl;

  return 0;
}

int get_size() { return array_size; }
