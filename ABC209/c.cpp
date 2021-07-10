#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

const ll DIV = 1000000007;

int main() {
  int n; cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  sort(c.begin(), c.end());

  ll ans = 1;
  for (int i = 0; i < n; i++) {
    ans = ans * max(0, c[i] - i) % DIV;
  }

  cout << ans << endl;
  return 0;
}