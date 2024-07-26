//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie();
    
    string str; cin >> str;
    int cnt = 0;
    int ans = 0;
    
    for (int i = 1; i < str.size() - 1; i++) {
        if (str[i] == '(' && str[i - 1] == '(') cnt++;
        if (str[i] == ')' && str[i + 1] == ')') ans += cnt;
    }
    cout << ans<<"\n";
}
