#include <iostream>
using namespace std;

//  a + (a + 1) + ... + b
long sum(const long &a, const long &b) { return (a + b) * (b - a + 1) / 2;}

int main() {
  int T; cin >> T;
  while (T--) {
    long L, R;
    cin >> L >> R;

    const long minC = L;
    const long maxC = R - L;

    if (minC > maxC) {
      cout << 0 << endl;
    } else {
      //  初項と末項を渡す
      cout << sum(R - maxC - L + 1, R - minC - L + 1) << endl;
    }

  }
  return 0;
}