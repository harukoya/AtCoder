#include <iostream>

using namespace std;

int main() {
  int x, y; cin >> x >> y;
  int ans = 0;
  if (x != y) {
    ans = 3 - (x+y);
  } else {
    ans = x;
  }
  cout << ans << endl;
  return 0;
}