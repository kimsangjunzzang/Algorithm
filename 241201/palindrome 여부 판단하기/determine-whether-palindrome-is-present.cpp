#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 입력받기
    string str; cin >> str;

    // 문자열 복사 후 뒤집기
    string res = str;
    reverse(res.begin(), res.end());

    // 회문 여부 확인
    if (str == res) cout << "Yes" << "\n";
    else cout << "No" << "\n";


    return 0;
}