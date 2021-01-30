#include <iostream>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;

  if (C == 0) {
    while (B != 0) {
      A--;
      if (A > 0) {
        B--;
      } else {
        break;
      }
    }
  } else {
    while (A != 0) {
      B--;
      if (B > 0) {
        A--;
      } else {
        break;
      }
    }
  }

  if (A > B) {
    std::cout << "Takahashi" << std::endl;
  } else {
    std::cout << "Aoki" << std::endl;
  }
  return 0;
}