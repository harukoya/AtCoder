#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  //  試合結果の表（参加者人数*参加者人数の2次元配列）
  vector<vector<string>> match_result(N, vector<string>(N));
  //  試合結果を表に記載(マッチ数でループ)
  for(int i = 0; i < M; i++){
    //  各試合での勝った人と負けた人
    int win = A.at(i);
    int lose = B.at(i);
    //  勝ちを書き込み
    match_result.at(win - 1).at(lose -1) = "o";
    //  負けを書き込み
    match_result.at(lose - 1).at(win - 1) = "x";
  }
  //  試合結果の表を出力
  for (int i = 0; i < match_result.size(); i++){
    //  i行目
    for (int j = 0; j < match_result.at(i).size(); j++) {
      //  j列目
      if (j != 0) {
        cout << " ";
      }
      if (match_result.at(i).at(j) =="") {
        //  試合結果がなければ - を出力
        cout << "-";
      } else {
        //  試合結果を出力
        cout << match_result.at(i).at(j);
      }
    }
    //  改行を出力
    cout << endl;
  }

  return 0;
}