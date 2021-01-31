#include <iostream>
#include <tuple>

int main() {
  std::pair<int, int> p(3, 5);
  int right;
  std::tie(std::ignore, right) = p;
  std::cout << right << std::endl;    //  5

  std::tuple<int, std::string, bool> tpl(2, "hello", false);
  int x;
  std::string s;
  std::tie(x, s, std::ignore) = tpl;
  std::cout << x << " " << s << std::endl;    //  2 hello

  return 0;
}