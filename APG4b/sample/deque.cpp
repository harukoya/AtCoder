#include <iostream>
#include <deque>

int main() {
  std::deque<int> d;
  d.push_back(10);
  d.push_back(1);
  d.push_back(3);

  std::cout << d.front() << std::endl;    //  先頭の10
  d.pop_front();

  std::cout << d.back() << std::endl;   //  末尾の3
  d.pop_back();

  d.push_front(5);
  d.push_back(2);

  std::cout << d.at(1) << std::endl;

  return 0;
}