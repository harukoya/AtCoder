#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  int price;
  int quantity;
  string text;

  cin >> p;

  if (p == 1) {
    cin >> price >> quantity;
    cout << price * quantity << endl;
  } else if (p == 2) {
    cin >> text >> price >> quantity;
    cout << text + "!" << endl;
    cout << price * quantity << endl;
  }

  return 0;
}