#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;

  vector<int> d(N);
  for (int i = 0; i < N; i++) {
    cin >> d[i];
  }

  //  大きい順に並べる
  sort(d.begin(), d.end(), greater<int>{});

  int result_count = 0;
  for (int i = 0; i < N; i++) {
    if (i != 0) {
      if (d[i] != d[i - 1]) {
        result_count++;
      }
    } else {
      result_count++;
    }
  }
  cout << result_count << endl;
  return 0;
}