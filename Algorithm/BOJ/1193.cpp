//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;

    int i = 1;
    
    while (N > i) {
        N -= i;
        i++;
    }
    // 홀수
    if (i % 2 == 1){
        cout << i + 1 - N << '/' << N << endl;
    }
    // 짝수
    else {
        cout << N << '/' << i + 1 - N << endl;
    }
}
