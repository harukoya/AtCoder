#include <iostream>
#include <bitset>
#include <vector>

int main() {
  int n = 5;

  // {0, 1, …, n-1}の部分集合の全探索
  for (int bit = 0; bit < (1<<n); bit++) {
    std::vector<int> S;
    //  bitの表す集合を求める
    for (int i = 0; i < n; i++) {
      if (bit & (1<<i)) {
        S.push_back(i);
      }
    }
    //  bitの表す集合を出力
    std::cout << bit << ": {";
    for (int i = 0; i < (int)S.size(); i++) {
      std::cout << S[i] << " ";
    }
    std::cout << "}" << std::endl;
  }
}