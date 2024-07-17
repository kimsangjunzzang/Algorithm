//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie();
    cout.tie();
    
    int testCase,num;
    cin>> testCase>>num;
    
    int arr[100004];
    int res = -10000001;
    
    for(int i=1;i<=testCase;i++) {
        int x; cin>> x;
        arr[i] = arr[i-1] + x;
    }
    for(int i = num; i <= testCase; i++){
        res = max( res, arr[i] - arr[i - num] );
    }
    
    cout << res;
    
    return 0;
}
