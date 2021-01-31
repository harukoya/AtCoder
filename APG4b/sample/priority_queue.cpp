#include <iostream>
#include <queue>

int main() {
  std::priority_queue<int> pq;
  pq.push(3);
  pq.push(10);
  pq.push(6);
  pq.push(1);

  while (!pq.empty()) {
    std::cout << pq.top() << std::endl;
    pq.pop();
  }

  return 0;
}