#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b; cin >> a >> b;
  int sa = 0;
  int sb = 0;
  for (int i = 0; i < a.size(); i++) {
    sa += a[i] - '0';
  }
  for (int i = 0; i < b.size(); i++) {
    sb += b[i] - '0';
  }

  cout << max(sa, sb) << endl;
  return 0;
}