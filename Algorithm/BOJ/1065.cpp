//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;

    // 1부터 N까지 한수인지 검사하여 개수 세기
    for (int i = 1; i <= N; ++i) {
        if (i < 100) {
            // 1부터 99까지는 모두 한수
            ++count;
        } else {
            // 100 이상의 경우 자릿수 차이를 비교
            int first = i / 100;        // 백의 자리
            int second = (i / 10) % 10; // 십의 자리
            int third = i % 10;         // 일의 자리

            // 자릿수 차이가 일정하면 한수로 판단
            if ((first - second) == (second - third)) {
                ++count;
            }
        }
    }

    cout << count << endl;  // 결과 출력
}
