//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int h, i, a, r, c;
  cin >> h >> i >> a >> r >> c;
  cout << h * i - a * r * c;
  return 0;
}
