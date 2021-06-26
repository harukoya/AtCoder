#include <iostream>

using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  int ans = a+b;
  if (ans < a+c) {
    ans = a+c;
  }
  if (ans < b+c) {
    ans = b+c;
  }

  cout << ans << endl;
  return 0;
}