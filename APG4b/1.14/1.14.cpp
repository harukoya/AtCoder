#include <bits/stdc++.h>
using namespace std;

int main() {
  int num = 3;
  vector<int> brothers(num);
  for (int i = 0; i < brothers.size(); i++) {
    cin >> brothers[i];
  }

  //  ソートする
  sort(brothers.begin(), brothers.end());
  //  最小値の取得
  int min = brothers[0];
  //  最大値の取得
  int max = brothers[num -1];

  cout << max - min << endl;

  return 0;
}