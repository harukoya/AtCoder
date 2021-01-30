#include <iostream>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;

  if (C == 0) {
    if (A <= B) {
      std::cout << "Aoki" << std::endl;
    } else {
      std::cout << "Takahashi" << std::endl;
    }
  } else {
    if (B <= A) {
      std::cout << "Takahashi" << std::endl;
    } else {
      std::cout << "Aoki" << std::endl;
    }
  }

  return 0;
}