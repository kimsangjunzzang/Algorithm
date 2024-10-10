//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <algorithm>
using namespace std;

int st[20];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int testCase; cin >> testCase;
    
    for (int i = 0; i < testCase; i++) {
        int num; cin >> num;
        int res = 0;
        
        for (int i = 0; i < 20; i++) {
            cin >> st[i];
        }
        
        for (int i = 0; i < 20; i++) {
            for (int j = i; j < 20; j++) {
                if (st[i] > st[j]) res += 1;
            }
        }
        cout << num << ' ' << res << "\n";
    }
    
    return 0;
}
