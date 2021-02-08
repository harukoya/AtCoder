#include <iostream>
#include <vector>

int main() {
  int N, K;
  std::cin >> N >> K;
  std::vector<int> A(N);
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }

  bool can = false;
  // bitは{0, 1, …, N-1} の範囲で動く
  for (int bit = 0; bit < (1<<N); bit++) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
      if (bit & (1<<i)) {
        sum += A[i];
      }
    }

    if (sum == K) can = true;
  }

  if (can) std::cout << "YES" << std::endl;
  else std::cout << "No" << std::endl;

}