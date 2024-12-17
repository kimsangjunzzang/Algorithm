//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    int arr[26] = {0};

    for (int i = 0; i < testCase; i++) {
        string str; cin >> str;

        if (str[0] >= 'a' && str[0] <= 'z') {
            arr[str[0] - 'a']++;
        }
    }

    bool found = false;
    for (int i = 0; i < 26; i++) {
        if (arr[i] >= 5) {
            cout << char('a' + i);
            found = true;
        }
    }

    if (!found) {
        cout << "PREDAJA"; // 조건을 만족하는 알파벳이 없는 경우
    }
    cout <<"\n";

    return 0;
}
