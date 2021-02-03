#include <iostream>
#include <set>

int main() {
  std::set<int> s;

  s.insert(3);
  s.insert(7);
  s.insert(8);
  s.insert(10);
  //  この操作は無視される
  s.insert(3);

  std::cout << "size: " << s.size() << std::endl;

  if (s.count(7)) {
    std::cout << "found 7" << std::endl;
  }
  if (s.count(5)) {
    std::cout << "found 5" << std::endl;
  }

  return 0;
}