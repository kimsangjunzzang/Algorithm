//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int W, H, N, M;
    cin >> W >> H >> N >> M;
    
    // (N+1) 간격으로 W와 H에서 몇 개의 칸이 있는지 계산
    int cntW = (W + N) / (N + 1);
    int cntH = (H + M) / (M + 1);
    
    int cnt = cntW * cntH;

    cout << cnt << endl;

    return 0;
}
