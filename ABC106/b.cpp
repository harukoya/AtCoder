#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int ans = 0;
  int cnt, j;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) continue;
    j = 1;
    cnt = 0;
    while (i >= j) {
      if (i % j == 0) cnt++;
      j++;
    }
    if (cnt == 8) ans++;
  }

  cout << ans << endl;
  return 0;
}