#include <iostream>
#include <map>

int main() {
  int N;
  std::map<int, int> num;

  std::cin >> N;
  int inNum[N];
  for (int i = 0; i < N; i++) {
    std::cin >> inNum[i];
  }

  for (int i = 0; i < N; i++) {
    if (num.count(inNum[i])) {
      //  既に存在しているので、Valueをカウントアップ
      int value = num.at(inNum[i]) + 1;
      num.at(inNum[i]) = value;
    } else {
      //  初期値1で追加
      num[inNum[i]] = 1;
    }
  }

  //  要素数ループして最大出現回数を求める
  int max_value = 0;
  int max_key = 0;
  for (std::pair<int, int> p : num) {
    int key = p.first;
    int value = p.second;
    if (value > max_value) {
      max_value = value;
      max_key = key;
    }
  }

  std::cout << max_key << " " << max_value << std::endl;
  return 0;
}