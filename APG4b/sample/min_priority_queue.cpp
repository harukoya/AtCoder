#include <iostream>
#include <queue>

int main() {
  //  小さい順に取り出される優先度付きキュー
  std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  while (!pq.empty()) {
    std::cout << pq.top() << std::endl;
    pq.pop();
  }

  return 0;
}