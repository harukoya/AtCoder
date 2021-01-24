#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;

  int x = -1, y = -1, z = -1;
  bool finish = false;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      int k = N - i - j;
      int sum = 10000*i + 5000*j + 1000*k;
      if (sum == Y) {
        x = i;
        y = j;
        z = k;
        finish = true;
        break;
      }
    }
    if (finish) {
      break;
    }
  }

  cout << x << " " << y << " " << z << endl;
  return 0;
}