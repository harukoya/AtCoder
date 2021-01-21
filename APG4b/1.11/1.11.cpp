#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  //  計算結果
  int result = A;

  for (int i = 0; i < N ; i++) {
    string op = "";
    int B = 0;
    cin >> op >> B;

    if (op == "+") {
      result += B;
    } else if (op == "-") {
      result -= B;
    } else if (op == "*") {
      result *= B;
    } else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      } else {
        result /= B;
      }
    }

    cout << i + 1 << ":" << result << endl;
  }

  return 0;
}