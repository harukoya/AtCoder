#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  int ans = 0;
  for (int c = 1; n - c >= 1; c++) {
    int x = n - c;
    for (int a = 1; a * a <= x; a++) {
      if (x % a != 0) continue;
      if (a * a == x) ans += 1;
      else ans += 2;
    }
  }

  cout << ans << endl;
  return 0;
}