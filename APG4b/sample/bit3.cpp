#include <iostream>
#include <bitset>

int main() {
  //  3ビットのビット列をすべて列挙する
  for (int tmp = 0; tmp < (1 << 3); tmp++) {
    std::bitset<3> s(tmp);
    //  ビット列を出力
    std::cout << s << std::endl;
  }

  return 0;
}