#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int i = 0;
  int j = 0;
  string score_bar;

  while (i < A) {
    score_bar += "]";
    i++;
  }
  cout << "A:" << score_bar << endl;
  score_bar = "";

  while (j < B) {
    score_bar += "]";
    j++;
  }
  cout << "B:" << score_bar << endl;

  return 0;
}