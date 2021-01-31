#include <iostream>
#include <algorithm>
#include <tuple>

int main() {
  int N;
  std::cin >> N;

  using pii = std::pair<int, int>;
  pii p[N];
  for (int i = 0; i < N; i++) {
    std::cin >> p[i].second >> p[i].first;
  }

  std::sort(p, p+N);

  for (pii t : p) {
    int a, b;
    std::tie(b, a) = t;
    std::cout << a << " " << b << std::endl;
  }

  return 0;
}