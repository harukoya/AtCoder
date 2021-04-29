#include <iostream>
using namespace std;

int main() {
  int n, w; cin >> n >> w;
  int ans = 0;
  while(ans * w <= n) {
    ans++;
  }
  cout << ans -1 << endl;
  return 0;
}