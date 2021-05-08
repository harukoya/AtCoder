#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int ans = 0;
  while(n > 0) {
    n -= 100;
    ans++;
  }

  cout << ans << endl;
  return 0;
}