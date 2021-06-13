#include <iostream>

using ll = long long;
using namespace std;

int main() {
  ll a, b, c; cin >> a >> b >> c;
  if (c%2 == 0) {
    if (abs(a) == abs(b)) {
      cout << "=" << endl;
      return 0;
    } else if (abs(a) > abs(b)) {
      cout << ">" << endl;
      return 0;
    } else {
      cout << "<" << endl;
      return 0;
    }
  } else {
    if (abs(a) == abs(b)) {
      if (a == b) {
        cout << "=" << endl;
        return 0;
      } else if (a > b) {
        cout << ">" << endl;
        return 0;
      } else {
        cout << "<" << endl;
        return 0;
      }
    } else if (a > b) {
      cout << ">" << endl;
      return 0;
    } else {
      cout << "<" << endl;
      return 0;
    }
  }
}