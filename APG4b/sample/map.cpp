#include <iostream>
#include <string>
#include <map>

int main() {
  std::map<std::string, int> score;
  score["Alice"] = 100;
  score["Bob"] = 89;
  score["Charlie"] = 95;

  std::cout << score["Alice"] << std::endl;
  std::cout << score.at("Bob") << std::endl;
  std::cout << score["Charlie"] << std::endl;

  if (score.count("Alice")) {
    std::cout << "Alice:" << score.at("Alice") << std::endl;
  }
  if (score.count("Jiro")) {
    std::cout << "Jiro:" << score.at("Jiro") << std::endl;
  }

  for (auto p : score) {
    std::string k = p.first;
    int v = p.second;
    std::cout << k << "=>" << v << std::endl;
  }

  return 0;
}