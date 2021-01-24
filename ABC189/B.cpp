#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> V(N);
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> V[i] >> P[i];
  }

  int result_cnt = 0;
  int alcohol = 0;
  bool out = false;
  for (int i = 0; i < N; i++) {
    alcohol += V[i] * P[i];
    result_cnt++;
    if (alcohol > X * 100) {
      out = true;
      break;
    }
  }

  if (out) {
    cout << result_cnt << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}