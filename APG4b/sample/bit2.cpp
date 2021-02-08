#include <iostream>
#include <bitset>

int main() {
  std::bitset<4> S;
  S.set(0, 1);
  std::cout << S << std::endl;

  if (S.test(3)) {
    std::cout << "4th bit is 1" << std::endl;
  } else {
    std::cout << "4th bit is 0" << std::endl;
  }

  return 0;
}