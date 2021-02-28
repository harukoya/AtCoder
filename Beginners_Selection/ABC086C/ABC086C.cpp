#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int t[n+1], x[n+1], y[n+1];
  t[0] = 0;
  x[0] = 0;
  y[0] = 0;
  for (int i = 1; i < n+1; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }

  bool can = true;
  int dist, dt;
  for (int i = 0; i < n; i++) {
    dist = abs(x[i] - x[i+1]) + abs(y[i] - y[i+1]);
    dt = abs(t[i] - t[i+1]);
    if (dist > dt) can = false;
    if (dist % 2 != dt % 2) can = false;
  }
  
  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}