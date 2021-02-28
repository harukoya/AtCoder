#include <iostream>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  double ans;
  ans = 1.0 - (b / a);
  cout << ans * 100 << endl;
  return 0;
}