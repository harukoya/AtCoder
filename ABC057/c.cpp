#include <iostream>
using namespace std;
using ll = long long;

int func(ll a, ll b) {
  int ret = 0;
  string sa = to_string(a);
  string sb = to_string(b);
  return ret = max(sa.length(), sb.length());
}

int main() {
  ll n; cin >> n;
  int max = 100000;
  ll b;
  int ans = 1001001001;
  for (int a = 1; a <= max; a++) {
    if (n % a == 0) {
      b = n / a;
      ans = min(ans, func(a, b));
    } else {
      continue;
    }
  }
  cout << ans << endl;
  return 0;
}