#include <iostream>
#include <vector>
using namespace std;

const int MAXCASE = 20000;
struct testCase {
  int L, R;
};
testCase tcase[MAXCASE];
int result[MAXCASE];

void func(int num, testCase tcase) {
  int max, min;
  max = tcase.L;
  min = tcase.L;
  if (max < tcase.R) max = tcase.R;
  if (min > tcase.R) min = tcase.R;

  int dif = max - min;
  if (dif == 0) {
    if (max == min && min == 0) result[num] = 1;
    else result[num] = 0;
    return;
  }
  int cnt = 0;
  //  max から min まで引き算していく
  for (int i = max; i >= min; i--) {
    for (int j = i; j >= min; j--) {
      if (i - j >= min && i - j <= max) cnt++;
    }
  }

  result[num] = cnt;
}

int main() {
  int T; cin >> T;
  int l, r;
  for (int i = 0; i < T; i++) {
    cin >> l >> r;
    tcase[i].L = l;
    tcase[i].R = r;
  }

  for (int i = 0; i < T; i++) {
    func(i, tcase[i]);
  }

  //  結果の出力
  for (int i = 0; i < T; i++) {
    cout << result[i] << endl;
  }
  
  return 0;
}