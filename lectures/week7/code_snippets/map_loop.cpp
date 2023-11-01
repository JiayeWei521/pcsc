#include <iostream>
#include <map>
#include <vector>

int main() {

  std::map<std::string, double> m;

  for (std::pair<std::string, double> p : m) {
    auto &k = p.first;
    auto &v = p.second;
    std::cout << "key: " << k << ", value: " << v;
  }

  // equivalent to
  for (auto &&[k, v] : m) {
    std::cout << "key: " << k << ", value: " << v;
  }
}