//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>


using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    
    for (int i = 0; i < testCase; i++) {
        long long arr[100001][4] = {0,};
        long long n;
        
        cin >> n;
        arr[1][1] = 1; // 1 = 1
        arr[2][2] = 1; // 2 = 2
        
        arr[3][1] = 1; // 3 = 2+1
        arr[3][2] = 1; // 3 = 1+2
        arr[3][3] = 1; // 3 = 3
        
        for (int j = 4; j <= n; j++) {
            arr[j][1] = (arr[j - 1][2] + arr[j - 1][3]) % 1000000009;
            arr[j][2] = (arr[j - 2][1] + arr[j - 2][3]) % 1000000009;
            arr[j][3] = (arr[j - 3][1] + arr[j - 3][2]) % 1000000009;
        }
        
        cout << (arr[n][1] + arr[n][2] + arr[n][3]) % 1000000009 << "\n";
    }
    
    return 0;
}
