#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  double tmp = 1.08*n;
  int ans = (int)tmp;
  if (ans < 206) {
    cout << "Yay!" << endl;
  } else if (ans == 206) {
    cout << "so-so" << endl;
  } else {
    cout << ":(" << endl;
  }
  return 0;
}