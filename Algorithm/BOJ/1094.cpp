//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    int num; cin >> num;
    int ans = 0;
    
    while (num>0) {
        if (num % 2 == 1) {
            ans++;
        }
        num /= 2;
    }
    cout << ans << endl;
}
