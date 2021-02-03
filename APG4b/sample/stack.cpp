#include <iostream>
#include <stack>

int main() {
  std::stack<int> s;
  s.push(10);
  s.push(1);
  s.push(3);

  std::cout << s.top() << std::endl;
  s.pop();
  std::cout << s.top() << std::endl;

  return 0;
}