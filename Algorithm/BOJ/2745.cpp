//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str; cin >> str;
    int B; cin >> B;

    int result = 0;
    int power = 1; // B^0부터 시작

    // 뒤에서부터 한 자리씩 처리
    for (int i = str.size() - 1; i >= 0; --i) {
        char c = str[i];
        int value;

        // 숫자인 경우
        if ('0' <= c && c <= '9') {
            value = c - '0';
        }
        // 알파벳인 경우
        else {
            value = c - 'A' + 10;
        }

        result += value * power;
        power *= B;
    }

    cout << result << endl;

    return 0;
}
