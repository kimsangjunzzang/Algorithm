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
    cin.tie();cout.tie();
    
    int N,M;
    cin >> N >> M;
    
    int arr[301][301];
    
    for(int i = 1;i<=N;i++) {
        for(int j = 1;j<=M;j++) {
            cin >> arr[i][j];
        }
    }
    
    int testCase;
    cin>> testCase;
    
    while (testCase--) {
        int res = 0;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        for(int i = a; i <=c;i++){
            for(int j = b; j <=d;j++){
                res += arr[i][j];
            }
        }
        cout<<res<<endl;
    }
}
