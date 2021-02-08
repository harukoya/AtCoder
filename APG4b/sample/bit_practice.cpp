#include <iostream>
#include <bitset>
#include <vector>

int main() {
  int N, SUM;
  std::cin >> N >> SUM;
  std::vector<int> A(N);
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }

  bool ans = false;

  //  すべての選び方を試す
  for (int tmp = 0; tmp < (1 << 20); tmp++) {
    //  最大20個なので、20ビットのビット列をして扱う
    std::bitset<20> s(tmp);

    int sum = 0;
    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
        sum += A.at(i);
      }
    }
    if (sum == SUM) {
      ans = true;
    }
  }

  if (ans) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}