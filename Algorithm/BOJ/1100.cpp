//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    char arr[8][8] = {};
    int cnt = 0;
    
    for ( int i=0;i<8;i++) {
        for ( int j=0;j<8;j++) {
            cin >> arr[i][j];
        }
    }
    for ( int i=0;i<8;i++)  {
        if( i % 2 == 1) {
            for ( int j=1;j<8;j=j+2) {
                if(arr[i][j] == 'F') cnt++;
            }
        } else {
            for ( int j=0;j<8;j=j+2) {
                if(arr[i][j] == 'F') cnt++;
            }
        }
    }
    cout << cnt << endl;
}
