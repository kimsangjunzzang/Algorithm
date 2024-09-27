//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int testCase; cin >> testCase;
    
    for(int i=0;i<testCase;i++){
        int A, B; cin >> A >> B;
        int res = 0;
        
        while (A * 4 < B){
            A++;
            res++;
        }
        
        if (3 * A > B){
            res += 3 * A - B;
        }
        
        cout << res << "\n";
    }
}
