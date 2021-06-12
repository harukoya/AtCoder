#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  string ans = "";
  if (n%2 == 0) {
    ans = "White";
  } else {
    ans = "Black";
  }
  
  cout << ans << endl;
  return 0;
}