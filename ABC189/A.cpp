#include <bits/stdc++.h>
using namespace std;

int main() {
  string input;
  cin >> input;

  if (input[0] == input[1] && input[1] == input[2]) {
    cout << "Won" << endl;
  } else {
    cout << "Lost" << endl;
  }

  return 0;
}