#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int b[n-1];
  const int INF = 1001001001;
  b[n-1] = INF;
  for (int i = 0; i < n-1; i++) {
    cin >> b[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) ans += b[0];
    else ans += min(b[i-1], b[i]);
  }

  cout << ans << endl;
  return 0;
}