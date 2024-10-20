//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;


int main() {
    int n1, n2; cin >> n1 >> n2;
    // 주어진 수식 계산
    int result = (n2 - n1) * (n2 - n1 + 1) / 2;

    // 결과 출력
    cout << result <<endl;

    return 0;
}
