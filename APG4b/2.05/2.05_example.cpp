#include <bits/stdc++.h>
using namespace std;

//  x番の組織について、子組織からの報告書が揃った時刻を帰す
//  childrenは組織の関係を表す二次元配列
int complete_time(vector<vector<int>> &children, int x) {
  //  ベースケース
  //  x番目の配列に要素がない
  if (children.at(x).size() == 0) {
    return 0;
  }

  //  再帰ステップ
  //x番の子組織すべてに対して、処理する
  int max_receive_time = 0;
  for (int c : children.at(x)) {
    int receive_time = complete_time(children, c) + 1;
    max_receive_time = max(max_receive_time, receive_time);
  }
  return max_receive_time;
}

int main() {
  int N; //  組織数
  //  組織数の入力
  cin >> N;

  vector<int> p(N); //  親組織の番号
  p[0] = -1;  //  0番組織の親はいないので、-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p[i];
  }

  //  組織の関係から二次元配列を作る
  vector<vector<int>> children(N);  //  ある組織の子組織の番号
  for (int i = 1; i < N; i++){
    int parent = p.at(i); //  i番目の親組織の番号
    children.at(parent).push_back(i); //  parentの子組織にi番を追加
  }

  //  0番の組織のもとに報告書がそろう時刻を求める
  cout << complete_time(children, 0) << endl;
}