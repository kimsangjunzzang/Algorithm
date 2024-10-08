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

int main() {
    int testCase; cin >> testCase;
    vector<int>v(testCase);
    vector<int>op;
    
    int maximum = -1000000000;
    int minimun = 1000000000;
    
    // MARK: 배열 생성
    for ( int i=0;i<testCase;i++) {
        cin >> v[i];
    }
    
    // MARK: OPERATOR 배열 생성
    for ( int i=0;i<4;i++) {
        int num; cin >> num;
        
        for ( int j = 0; j < num; j++) {
            op.push_back(i);
        }
    }
    
    do {
        int res = v[0];
        // MARK: 연산자가 적용 되는 횟수는 (전체 원소-1) 만큼이다.
        for ( int i=0;i<v.size()-1 ;i++){
            
            switch (op[i]) {
                case  0:
                    res += v[i + 1];
                    break;
                case  1:
                    res -= v[i + 1];
                    break;
                case  2:
                    res *= v[i + 1];
                    break;
                case  3:
                    res /= v[i + 1];
                    break;
            }
        }
        minimun = min(minimun,res);
        maximum = max(maximum,res);
        
    } while(next_permutation(op.begin(), op.end()));
    
    cout << maximum << endl;
    cout << minimun << endl;
    
}
