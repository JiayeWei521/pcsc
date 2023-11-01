#include <vector>

template <typename VecType, typename T> // _
void for_each(VecType &vec, T f) {
  for (auto d : vec) {
    auto res = f(d);
  }
}

int main() {
  int a = 2;
  std::vector<double> vec(10);
  for_each(vec, [a](double d) { return d * a; });
}