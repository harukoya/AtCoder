#include <iostream>

int main() {
  using pii = std::pair<int, int>;
  //  piiという型名はpair<int, int>と同じで使える

  pii p;
  p = std::make_pair(1, 2);
  std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
  p = pii(3, 4);
  std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;

  return 0;
}