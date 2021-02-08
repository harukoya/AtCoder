#include <iostream>
#include <string>

using namespace std;

int main() {
  string S;
  cin >> S;

  //  +を入れられる場所の数
  int N = S.length();
  long long res = 0;

  //  N-1 通り(いくつか選ぶ方法をbitという変数に対応付け)
  for (int bit = 0; bit < (1 << N - 1); bit++) {
    long long tmp = 0;
    for (int i = 0; i < N - 1; i++) {
      //  桁をあげる
      tmp *= 10;
      //  文字列Sのi番目（左から）を足す
      tmp += S[i] - '0';
      if (bit & (1 << i)) {
        res += tmp;
        tmp = 0;
      }
    }

    tmp *= 10;
    tmp += S.back() - '0';
    res += tmp;
  }
  cout << res << endl;
}