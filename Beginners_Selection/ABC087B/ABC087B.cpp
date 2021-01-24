#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int result_count = 0;
  //  500円玉
  for (int i = 0; i <= A; i++) {
    //  100円玉
    for (int j = 0; j <= B; j++) {
      //  50円玉
      for (int k = 0; k <= C; k++) {
        int sum = 500 * i + 100 * j + 50 * k;
        if (sum == X) {
          result_count++;
        }
      }
    }
  }

  cout << result_count << endl;
  return 0;
}