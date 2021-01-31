#include <iostream>
#include <tuple>
#include <string>

int main() {
  std::tuple<int, std::string, bool> data(1, "hello", true);
  std::get<2>(data) = false;
  std::cout << std::get<1>(data) << std::endl;    //  hello

  data = std::make_tuple(2, "WORLD", true);

  int a;
  std::string s;
  bool f;
  std::tie(a, s, f) = data;
  std::cout << a << " " << s << " " << f << std::endl;  //  2 WORKD 1

  return 0;
}