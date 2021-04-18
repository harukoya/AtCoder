#include <iostream>
using namespace std;

int main() {
  int x, y; cin >> x >> y;
  int a = min(x, y);
  int b = max(x, y);
  if (a + 3 > b) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}