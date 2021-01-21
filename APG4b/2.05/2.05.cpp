#include <bits/stdc++.h>
using namespace std;

//  x番の組織が親組織に提出する枚数を返す
//  childrenは組織の関係を表す2次元配列
int count_report_num(vector<vector<int>> &children, int x) {
  //  ベースライン
  //  子組織がなければ1を返す
  if (children.at(x).size() == 0) {
    return 1;
  }
  //  子組織から受けとった枚数の足し算+1を返す
  //  子組織がなければ1を返す
  int total_report_num = 0;
  for (int c : children.at(x)) {
    int report_num = count_report_num(children, c);
    total_report_num += report_num;
  }
  return total_report_num + 1;
}

int main() {
  int N;
  cin >> N;

  vector<int> p(N); //  各組織の親組織を示す配列
  p.at(0) = -1;
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  //  組織の関係から二次元配列を作る
  vector<vector<int>> children(N);  //  ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i); //  i番の親組織の番号一覧
    children.at(parent).push_back(i); //  parentの子組織一覧にi番を追加
  }

  //  各組織について、答えを出力
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}