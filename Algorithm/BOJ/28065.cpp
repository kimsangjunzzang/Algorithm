//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int i, num, n;
    cin >> n;
    num = 1;
    for (i = 1; i <= n; i++){
        cout << num << ' ';
        if (i % 2 == 1) num += n - i;
        else num -= n - i;
    }
}
