#include <iostream>

using namespace std;

int main() {
  int V, T, S, D;
  cin >> V >> T >> S >> D;

  bool canBatting = false;

  if (V * T > D || V * S < D) {
    canBatting = true;
  }
  
  if (canBatting) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}