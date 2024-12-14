//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int alpha[97]={0};
    string odd="", even ="";
    string s; cin >> s;

    for (char i : s){
        alpha[i]++;
    }

    for (char i = 'A'; i <= 'Z'; i++){
        if (alpha[i] % 2 == 1){
            odd += i;
        }
        for (int j = 0; j < alpha[i] / 2; j++){
            even += i;
        }
    }
    if (odd.size() > 1){
        cout<<"I'm Sorry Hansoo";
    } else {
        cout << even;
        cout << odd;
        reverse(even.begin(), even.end());
        cout << even;
    }
}
