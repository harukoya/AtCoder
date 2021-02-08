#include <iostream>
#include <string>
#include <bitset>
#include <vector>

//  AとBに共通して含まれる要素からなる集合を返す
std::bitset<50> intersection(std::bitset<50> A, std::bitset<50> B) {
  return A & B;
}

//  AとBのうち少なくとも一方に含まれる要素からなる集合を返す
std::bitset<50> union_set(std::bitset<50> A, std::bitset<50> B) {
  return A | B;
}

//  AとBのうちどちらか一方にだけ含まれる要素からなる集合を返す
std::bitset<50> symmetric_diff(std::bitset<50> A, std::bitset<50> B) {
  return A ^ B;
}

//  Aから値xをのぞく
std::bitset<50> subtract(std::bitset<50> A, int x) {
  A.set(x, 0);
  return A;
}

//  Aに含まれる要素に1を加える(49を含む場合、0になる)
std::bitset<50> increment(std::bitset<50> A) {
  std::bitset<50> ret = A << 1;
  if (A.test(49)) {
    ret.set(0, 1);
  }
  return ret;
}

//  Aに含まれる要素から1を引く(0を含む場合、４９になる)
std::bitset<50> decrement(std::bitset<50> A) {
  std::bitset<50> ret = A >> 1;
  if (ret.test(0)) {
    ret.set(49, 1);
  }
  return ret;
}

//  Sに値xを加える
std::bitset<50> add(std::bitset<50> S, int x) {
  S.set(x, 1);
  return S;
}

//  集合Sの内容を昇順で出力する（スペース区切りで各要素の値を出力する）
void print_set(std::bitset<50> S) {
  std::vector<int> cont;
  for (int i = 0; i < 50; i++) {
    if (S.test(i)) {
      cont.push_back(i);
    }
  }
  for (int i = 0; i < cont.size(); i++) {
    if (i > 0) std::cout << " ";
    std::cout << cont.at(i);
  }
  std::cout << std::endl;
}

int main() {
  std::bitset<50> A, B;
  int N;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int x;
    std::cin >> x;
    A = add(A, x);
  }
  int M;
  std::cin >> M;
  for (int i = 0; i < M; i++) {
    int x;
    std::cin >> x;
    B = add(B, x);
  }

  //  操作
  std::string com;
  std::cin >> com;

  if (com == "intersection") {
    print_set(intersection(A,B));
  } else if (com == "union_set") {
    print_set(union_set(A, B));
  } else if (com == "symmetric_diff") {
    print_set(symmetric_diff(A, B));
  } else if (com == "subtract") {
    int x;
    std::cin >> x;
    print_set(subtract(A, x));
  } else if (com == "increment") {
    print_set(increment(A));
  } else if (com == "decrement") {
    print_set(decrement(A));
  }
}