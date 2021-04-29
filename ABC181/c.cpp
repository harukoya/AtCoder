#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  rep(i, n) rep(j, i) rep(k, j) {
    int a = x[j] - x[i], b = y[j] - y[i];
    int c = x[k] - x[j], d = y[k] - y[j];
    if (b*c == d*a) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}