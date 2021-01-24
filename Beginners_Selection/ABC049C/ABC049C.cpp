#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) {
    reverse(divide[i].begin(), divide[i].end());
  }

  bool can = true;
  //  端から調べる
  for (int i = 0; i < S.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++) {
      string d = divide[j];
      if (S.substr(i, d.size()) == d) {
        //  ４このうちのどれかで切ることができた
        can2 = true;
        i+= d.size();
      }
    }
    if (!can2) {
      //  文字を切ることができなかった
      can = false;
      break;
    }
  }

  if (can) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}