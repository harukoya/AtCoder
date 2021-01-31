#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

int main() {
  std::vector<std::tuple<int, int, int>> a;
  a.push_back(std::make_tuple(3, 1, 1));
  a.push_back(std::make_tuple(1, 2, 100));
  a.push_back(std::make_tuple(3, 5, 1));
  a.push_back(std::make_tuple(1, 2, 3));

  std::sort(a.begin(), a.end());

  for (std::tuple<int, int, int> t : a) {
    int x, y, z;
    std::tie(x, y, z) = t;
    std::cout << x << " " << y << " " << z << std::endl;
  }

  return 0;
}