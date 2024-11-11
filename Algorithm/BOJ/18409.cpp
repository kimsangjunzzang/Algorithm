//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int testCase; cin >> testCase;
    string str; cin >> str;

    // 모음 집합 정의
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int cnt = 0;

    // 문자열 순회하면서 모음 개수 세기
    for (char c : str) {
        if (vowels.find(c) != vowels.end()) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
