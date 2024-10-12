//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int floor, numOfWind;
    cin >> floor >> numOfWind;

    vector<int> wind(5, 0); // wind 배열을 vector로 초기화
    vector<int> count(numOfWind, 0); // count 배열을 vector로 초기화

    vector<string> str;
    string tmp;

    // 입력받기
    for (int i = 0; i < (5 * floor) + 1; i++) {
        cin >> tmp;
        str.push_back(tmp);
    }

    // 바람의 세기 측정
    for (int i = 1; i < (5 * floor); i++) {
        for (int j = 0; j < numOfWind; j++) {
            if (str[i][(5 * j) + 1] == '.') {
                continue;
            } else if (str[i][(5 * j) + 1] == '*') {
                count[j]++;
            }
        }

        // 층이 끝날 때마다 바람의 세기를 집계
        if (i % 5 == 4) {
            for (int k = 0; k < numOfWind; k++) {
                wind[count[k]]++;
                count[k] = 0; // count 초기화
            }
            i++; // 다음 층으로 이동
        }
    }

    // 결과 출력
    for (int i = 0; i < 5; i++) {
        cout << wind[i] << " ";
    }
    cout << endl;

    return 0;
}

