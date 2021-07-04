#include <iostream>

using namespace std;

int main() {
  int p; cin >> p;
  int ans = 0;
  int now = p;
  int div = 0;
  while (now != 0) {
    int count = 1;
    for (int i = 1; i <= 11; i++) {
      if (count * i >= now || i == 11) {
        if (count == 1) count *= i;
        div = now / count;
        ans += div;
        now -= (div*count);
      } else {
        count = count * i;
      }
    }
  }

  cout << ans << endl;
  return 0;
}