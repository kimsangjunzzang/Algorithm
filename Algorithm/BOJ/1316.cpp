//
//  main.cpp
//  boj
//
//  Created by 김상준 on 6/20/24.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    int testCase;
    cin >> testCase;

    string str;
    int cnt = 0;

    for (int i = 0; i < testCase; i++) {
        cin >> str;

        if (str.length() <= 2) {
            continue;
        }
        else {
            
            for (int j = 0; j < str.length() - 1; j++) {
                if (str[j] != str[j + 1]) {
                    // 발견된 문자가 있을 때 실행되는 함수
                    if (str.find(str[j], j + 2) != string::npos) {
                        cnt++;
                        break;
                    }
                }
            }
            
        }
    }
    cout << testCase - cnt;
}
