#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int answer = 0;
  for (int price_a : A) {
    for (int price_b : P) {
      if (S == price_a + price_b) {
        answer++;
      }
    }
  }

  cout << answer << endl;
}