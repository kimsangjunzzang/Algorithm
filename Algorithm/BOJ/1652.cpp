//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    char arr[testCase][testCase];
   
    for (int i = 0; i < testCase; i++) {
        for (int j = 0; j < testCase; j++) {
            cin >> arr[i][j];
        }
    }

    // MARK: 가로 케이스 확인
    int horizontal_cnt = 0;
    
    for (int i = 0; i < testCase; i++) {
        int empty_space = 0;
        for (int j = 0; j < testCase; j++) {
            if (arr[i][j] == '.') {
                empty_space++;
            } else {
                if (empty_space >= 2) {
                    horizontal_cnt++;
                }
                empty_space = 0;
            }
        }
        if (empty_space >= 2) {
            horizontal_cnt++;
        }
    }

    // MARK: 세로 케이스 확인
    int vertical_cnt = 0;
    
    for (int j = 0; j < testCase; j++) {
        int empty_space = 0;
        for (int i = 0; i < testCase; i++) {
            if (arr[i][j] == '.') {
                empty_space++;
            } else {
                if (empty_space >= 2) {
                    vertical_cnt++;
                }
                empty_space = 0;
            }
        }
        if (empty_space >= 2) {
            vertical_cnt++;
        }
    }
    cout << horizontal_cnt << " " << vertical_cnt << endl;
}
