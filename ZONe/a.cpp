#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size()-4+1; i++) {
    if (s.substr(i, 4) == "ZONe") ans++;
  }

  cout << ans << endl;
  return 0;
}