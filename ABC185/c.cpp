#include <iostream>
#define rep(i,n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int L; cin >> L;
  ll ans = 0;
  __int128_t c = 1;
  for (int i = L-1; i >= L-11; i--) {
    c *= i;
  }
  ll m = 1;
  for (int i = 11; i >= 1; i--) {
    m *= i;
  }
  ans = c / m;
  cout << ans << endl;
  return 0;
}