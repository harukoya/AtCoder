#include <iostream>

int main() {
  std::pair<int, int> a(3, 1);
  std::pair<int, int> b(2, 10);
  //  3 > 2なので、a < b はfalse
  if (a < b) {
    std::cout << "a < b" << std::endl;
  } else {
    std::cout << "a >= b" << std::endl;
  }

  std::pair<int, int> c(5, 1);
  std::pair<int, int> d(5, 10);
  //  5 == 5だけど、1 < 10なので、c < d はtrue
  if (c < d) {
    std::cout << "c < d" << std::endl;
  } else {
    std::cout << "c >= d" << std::endl;
  }

  return 0;
}