//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> num, oper;
    int minimum = 1000000000;
    int maximum = -1000000000;
    int testCase; cin >> testCase;
    
    // MARK: A 1,2.3.....
    for(int i = 0 ; i < testCase ; i++){
        int m; cin >> m;
        num.push_back(m);
    }
    
    
    // MARK: 1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈
    for(int i = 0 ; i < 4 ; i++){
        int m; cin >> m;
        
        for(int j = 0 ; j < m ; j++){
            oper.push_back(i + 1);
        }
    }
    
    do{
        int ans = num[0];
        
        for(int i = 1 ; i < num.size() ; i++){
            
            switch(oper[i - 1]){
                case 1:
                    ans += num[i];
                    break;
                    
                case 2:
                    ans -= num[i];
                    break;
                    
                case 3:
                    ans *= num[i];
                    break;
                    
                case 4:
                    ans /= num[i];
                    break;
            }
        }
        
        minimum = min(minimum, ans);
        maximum = max(maximum, ans);
        
    } while(next_permutation(oper.begin(), oper.end()));
    
    cout << maximum << '\n' << minimum;
}
