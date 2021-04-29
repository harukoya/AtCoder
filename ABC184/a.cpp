#include <iostream>
using namespace std;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  int ans = 0;
  ans = (a * d) - (c * b);
  cout << ans << endl;
  return 0;
}