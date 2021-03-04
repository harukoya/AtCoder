#include <iostream>
using namespace std;
using ll = long long;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  int MAX = 100000;
  int ans = 1001001001;
  int sum;
  for (int i = 0; i <= MAX; i++) {
    sum = 2 * c * i + max(0, x - i) * a + max(0, y - i) * b;
    ans = min(ans, sum);
  }
  
  cout << ans << endl;
  return 0;
}