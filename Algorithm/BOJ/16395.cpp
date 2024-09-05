//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

long long combination(int n, int r) {
    long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int row, num;
    cin >> row >> num;
    
    // 파스칼의 삼각형에서 row-1번째 행과 num-1번째 열의 값을 출력
    cout << combination(row - 1, num - 1) << endl;
}
