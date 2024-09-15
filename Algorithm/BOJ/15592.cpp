//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1, x2, y2; // 첫 번째 전광판의 좌하단과 우상단 좌표
    int x3, y3, x4, y4; // 두 번째 전광판의 좌하단과 우상단 좌표

    // 좌표 입력
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // 전광판이 높이를 다 덮는 경우
    if (y4 > y2 && y1 > y3) {
        // 오른쪽을 다 덮을 경우
        if (x2 > x3 && x2 < x4) {
            x2 = x3;
        }
        // 왼쪽을 다 덮을 경우
        if (x4 > x1 && x1 > x3) {
            x1 = x4;
        }
    }

    // 전광판이 양 옆을 다 덮는 경우
    if (x4 > x2 && x1 > x3) {
        // 위쪽을 다 덮는 경우
        if (y2 > y3 && y2 < y4) {
            y2 = y3;
        }
        // 아래쪽을 다 덮는 경우
        if (y4 > y1 && y1 > y3) {
            y1 = y4;
        }
    }

    // 가려지지 않은 영역의 넓이 계산 및 출력
    cout << (x2 - x1) * (y2 - y1) << "\n";
}
