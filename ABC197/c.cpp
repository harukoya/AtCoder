#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 2001001001;
  for (int bit = 0; bit < (1 << n-1); bit++) {

    int orVal = 0;
    int xorVal = 0;

    for (int i = 0; i < n; i++) {
      orVal |= a[i];
      if (bit & (1 << i)) {
        xorVal ^= orVal;
        orVal = 0;
      }
    }
    xorVal ^= orVal;
    ans = min(ans, xorVal);
  }

  cout << ans << endl;
  return 0;
}