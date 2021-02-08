#include <iostream>
#include <queue>

using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  queue<int> result;
  for (int i = 0; i < N; i++) {
    if (!(A[i] == X)) {
      //  queueに追加
      result.push(A[i]);
    }
  }

  bool firstFLG = true;
  int resultSize = result.size();
  for (int i = 0; i < resultSize; i++) {
    if (firstFLG) {
      cout << result.front();
      result.pop();
      firstFLG = false;
    } else {
      cout << " " << result.front();
      result.pop();
    }
  }
  cout << endl;

  return 0;
}