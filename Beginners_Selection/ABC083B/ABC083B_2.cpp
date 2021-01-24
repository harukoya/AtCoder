#include <bits/stdc++.h>
using namespace std;

//  与えられたnを10で割り、各桁の合計値を返却
int findSumOfDigits(int n) {
  int sum = 0;
  while(n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int sum_result = 0;

  for (int i = 1; i <= N; i++) {
    int sum = findSumOfDigits(i);
    if (sum >= A && sum <= B) {
      sum_result += i;
    }
  }
  cout << sum_result << endl;
  return 0;
}