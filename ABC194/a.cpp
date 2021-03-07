#include <iostream>
using namespace std;

int main() {
  int A, B; cin >> A >> B;
  int nyu = A + B;
  if (nyu >= 15 && B >= 8) {
    cout << 1 << endl;
    return 0;
  }
  if (nyu >= 10 && B >= 3) {
    cout << 2 << endl;
    return 0;
  }
  if (nyu >= 3) {
    cout << 3 << endl;
    return 0;
  }
  cout << 4 << endl;
  return 0;
}