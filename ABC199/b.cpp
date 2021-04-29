#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  int max_a = *max_element(a.begin(), a.end());
  int min_b = *min_element(b.begin(), b.end());
  int ans;
  if (max_a > min_b)  ans = 0;
  else ans = min_b - max_a + 1;

  cout << ans << endl;
  return 0;
}