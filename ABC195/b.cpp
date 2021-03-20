#include <iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

const string not_find = "UNSATISFIABLE";

int main() {
  int a, b, w; cin >> a >> b >> w;
  w *= 1000;
  int n_max = -1;
  int n_min = 1001001001;
  for (int n = 1; n <= 1000000; n++) {
    if (a*n <= w && b*n >= w) {
      n_min = min(n, n_min);
      n_max = max(n, n_max);
    }
  }
  if (n_max == -1) cout << not_find << endl;
  else cout << n_min << " " << n_max << endl;
  return 0;
}