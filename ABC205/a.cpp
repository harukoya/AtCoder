#include <iostream>

using namespace std;

int main() {
  double a,b; cin >> a >> b;
  double ans;
  ans = (double)(b/100)*a;
  printf("%.6f\n", ans);
  return 0;
}