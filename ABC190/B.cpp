#include <iostream>

int main() {
  int N, S, D;
  std::cin >> N >> S >> D;

  int X[N];
  int Y[N];
  for (int i = 0; i < N; i++) {
    std::cin >> X[i] >> Y[i];
  }

  bool canDamage = false;
  for (int i = 0; i < N; i++) {
    if (X[i] < S && Y[i] > D) {
      canDamage = true;
    }
  }

  if (canDamage) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}