#include <iostream>

using ll = long long;
using namespace std;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  ll ans = -1;
  if (b >= (c*d)) {
    cout << ans << endl;
  } else {
    ll blue = a;
    ll red = 0;
    ans = 0;
    while (blue > (red*d)) {
      ans++;
      blue += b;
      red += c;
    }
    cout << ans << endl;
  }
  return 0;
}