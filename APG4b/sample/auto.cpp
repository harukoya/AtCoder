#include <iostream>
#include <string>
#include <vector>

std::string concat(std::string a, std::string b) {
  return a + b;
}

int main() {
  std::string a = "Hello,";
  std::string b = "World";
  auto ab = concat(a, b);
  std::cout << ab << std::endl;

  std::vector<int> c = {1, 2, 3};
  auto d = c;

  for (auto elem : d) {
    //  elemはint型
    std::cout << elem << std::endl;
  }

  return 0;
}
