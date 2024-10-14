//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

// N : 끊어진 기타줄의 개수
// M : 기타줄 브랜드
// 6개 패키지 가격, 낱개로 살때 가격
// 적어도 N개를 사기 위해 필요한 돈의 수

#include <iostream>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    int package = 1000, unit = 1000;
    
    while(M--) {
        int x,y; cin >> x >> y;
        package = min(package, x);
        unit = min(unit, y);
    }
    
    cout << min((N/6+1)*package, min(N/6*package + N%6*unit, N*unit)) << '\n';
}
