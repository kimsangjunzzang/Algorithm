//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    int cnt = 0;
    
    int arr [100][100] = {0};
    
    for( int i=0;i<testCase;i++) {
        int x,y; cin >> x >> y;
        
        for( int i=x;i<x+10;i++){
            for( int j=y;j<y+10;j++){
                arr[i][j] = 1;
            }
        }
    }
    for( int i=0;i<100;i++){
        for( int j=0;j<100;j++){
            if(arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt <<endl;
}
