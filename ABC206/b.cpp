#include <iostream>

using ll = long long;
using namespace std;

int main() {
  ll n; cin >> n;
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += i;
    if (ans >= n) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}