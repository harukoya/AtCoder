#include <bits/stdc++.h>
using namespace std;

int main() {
  int result = 0;
  int N;
  cin >> N;

  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  //  奇数が含まれているか調べる
  //  奇数がなければ全要素を2で割って、カウント+1
  //  繰り返す
  bool isContinue = true;
  while (isContinue) {
    for (int i = 0; i < N; i++) {
      if (vec.at(i) % 2 == 0) {
        vec.at(i) = vec.at(i) / 2;
      } else {
        isContinue = false;
        break;
      }
      //  全要素を割ったか
      if (i == N - 1) {
        result++;
      }
    }
  }
  cout << result << endl;
  return 0;
}