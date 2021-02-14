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

  long cnt = 0;
  int diff = max - min;
  if (diff == 0) {
    if (max == 0 && min == 0) cnt++;
  } else {
    for (int i = diff - 1; i > 0; i--) cnt += i;
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
