#include <iostream>
using ll = long long;
using namespace std;

int main() {
  ll n, k; cin >> n >> k;
  string ans = to_string(n);
  for (int i = 0; i < k; i++) {
    if (n % 200 == 0) {
      n /= 200;
      ans = to_string(n);
    } else {
      ans += to_string(200);
    }
    n = stoll(ans);
  }

  cout << ans << endl;
  return 0;
}