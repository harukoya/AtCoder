#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> a(4);
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  int ans = *min_element(a.begin(), a.end());
  cout << ans << endl;
 return 0; 
}