#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  long long a[n], p[n], x[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> p[i] >> x[i];
  }

  long long min;
  bool change = false;
  bool first = true;
  for (int i = 0; i < n; i++) {
    long long soldtime = 5 + ((x[i] - 1) * 10);
    long long needtime = a[i] * 10;
    if (needtime < soldtime) {
      if (first == true) {
        min = p[i];
        first = false;
        change = true;
      } else if (p[i] < min) {
        min = p[i];
        change = true;
      }
    }
  }

  if (change) cout << min << endl;
  else cout << -1 << endl;
  return 0;
}