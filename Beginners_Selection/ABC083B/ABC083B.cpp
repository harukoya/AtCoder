#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int result = 0;
  for (int i = 1; i <= N; i++) {
    //  各桁の和を求める
    string num = to_string(i);
    int sum = 0;
    for (int j = 0; j < num.size(); j++) {
      //  char型からint型へ変換
      sum += num.at(j) - '0';
    }
    //  各桁の和がA以上B以下であれば結果に加算
    if (sum >= A && sum <= B) {
      result += i;
    }
  }

  cout << result << endl;
  return 0;
}