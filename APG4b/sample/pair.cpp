#include <iostream>
#include <string>
#include <tuple>

int main() {
  std::pair<std::string, int> p("abc", 3);
  std::cout << p.first << std::endl;    //  abc

  p.first = "hello";
  std::cout << p.first << std::endl;
  std::cout << p.second << std::endl;

  p = std::make_pair("*", 1);

  std::string s;
  int a;
  std::tie(s, a) = p;
  std::cout << s << std::endl;    //  *
  std::cout << a << std::endl;    //  1

  return 0;
}