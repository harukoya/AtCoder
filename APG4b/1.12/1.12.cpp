#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  //  計算結果の初期値は1
  int result = 1;
  string op = "";
  for (int i = 0; i < S.size(); i++) {
    if (i % 2 != 0) {
      //  奇数番目は計算符号
      op = S.at(i);
      //  計算する
      if (op == "+") {
        result += 1;
      } else if (op == "-") {
        result -= 1;
      }
    }
  }

  cout << result << endl;
  return 0;
}