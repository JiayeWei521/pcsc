#include <iostream>

int get_size();

void init(int array[]) {

  int size = get_size();

  for (int i = 0; i < size; ++i) {
    array[i] = 0;
  }
}

int main(int argc, char *argv[]) {
  int size = 10;
  int array[size];
  int *a = &array[size+1];
    (*a) = 1234;
  std::cout << *a << std::endl;
  init(array);
  std::cout << *a << '\n';

  return 0;
}

int get_size() { return 20; }
