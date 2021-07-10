#include <iostream>

using namespace std;

int main() {
  int n, x; cin >> n >> x;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int ai; cin >> ai;
    if (i%2 == 0) ai--;
    sum += ai;
  }

  if (x >= sum) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}