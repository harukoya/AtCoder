#include <iostream>
#include <bitset>

int main() {
  std::bitset<8> a("00011011");
  std::bitset<8> b("00110101");

  auto c = a & b;
  std::cout << "1: " << c << std::endl;         //  00010001
  std::cout << "2: " << (c << 1) << std::endl;  //  00100010
  std::cout << "3: " << (c << 2) << std::endl;  //  01000100
  std::cout << "4: " << (c << 3) << std::endl;  //  10001000
  std::cout << "5: " << (c << 4) << std::endl;  //  00010000

  c <<= 4;                                      //  00010000
  c ^= std::bitset<8>("11010000");              //  11000000
  std::cout << "6: " << c << std::endl;

  return 0;
}