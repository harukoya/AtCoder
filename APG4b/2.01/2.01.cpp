#include <bits/stdc++.h>
using namespace std;

int main() {
  //  入力を取得
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  //  判定フラグ
  bool flg = false;
  for (int i = 0; i < data.size(); i++) {
    if (i != 0) {
      int bef = data[i-1];
      int aft = data[i];
      if (bef == aft) {
        flg = true;
      }
    }
  }

  if (flg) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}