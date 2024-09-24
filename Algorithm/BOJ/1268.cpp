//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int arr[1001][6] = {0, };
bool check[1001][1001] = {false,};

int main() {
    int testCase; cin >> testCase;
    
    for( int i=0;i<testCase;i++){
        for( int j = 0;j<5;j++) {
            cin >> arr[i][j];
        }
    }
    
    for( int i=0;i<5;i++){
        for( int j =0;j<testCase-1;j++) {
            for( int k = j+1;k<testCase;k++) {
                if(arr[j][i] == arr[k][i]) {
                    check[j][k] = check[k][j] = true;
                }
            }
        }
    }
    
    int answer = -1;
    int prev_cnt = -1;
    for( int i=0;i<testCase;i++) {
        int cnt = 0;
        for( int j=0;j<testCase;j++) {
            if(check[i][j]) cnt ++;
        }
        if( cnt > prev_cnt ){
            answer = i + 1;
            prev_cnt = cnt;
        }
    }
    cout << answer <<endl;
}
