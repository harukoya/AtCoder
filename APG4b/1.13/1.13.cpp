#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum_score = 0;
  int average_score = 0;
  //  個人の点数を入れるvector
  vector<int> vec_score(N);

  for (int i = 0; i < N; i++) {
    //  個人の点数を取得
    cin >> vec_score[i];
    //  合計点数に加算
    sum_score += vec_score[i];
  }

  //  平均値を計算
  average_score = sum_score / N;
  for (int i = 0; i < vec_score.size(); i++) {
    //  平均値と各個人の点数の差を出力
    if (vec_score[i] > average_score) {
      //  平均点より高い
      cout << vec_score[i] - average_score << endl;
    } else {
      //  平均点より低い
      cout << average_score - vec_score[i] << endl;
    }
  }

  return 0;
}