#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> time(N);
  vector<int> x(N);
  vector<int> y(N);
  for (int i = 0; i < N; i++) {
    cin >> time[i] >> x[i] >> y[i];
  }

  //  x座標、y座標の初期値
  int position_x = 0;
  int position_y = 0;
  for (int i = 0; i < N; i++) {
    //  移動可能量
    if (i != 0) {
      int canMove = time[i] - time[i - 1];
    } else {
      int canMove = time[i];
    }
  }
}