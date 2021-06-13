#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  for (int i = 1; i <= n; i++) {
    bool flg = false;

    for (int j = 0; j < n; j++) {
      if (i == a[j]) flg = true;
    }
    if (flg == false) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}