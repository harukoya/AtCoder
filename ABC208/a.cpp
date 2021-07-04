#include <iostream>

using namespace std;

int main() {
  int a, b; cin >> a >> b;
  if (6*a < b || a > b) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}