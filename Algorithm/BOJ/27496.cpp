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
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    long long X,N;
    cin >> N >> X;
    
    long long arr[1000001];
    arr[0] = 0;
    
    for(int i=1;i<=N;i++) {
        cin >> arr[i];
    }
    
    long long sum = 0;
    long long res = 0;
    long long cnt = 0;
    
    for(int i=1;i<=N;i++) {
        if(i > X) {
            sum -= arr[i-X];
        }
        sum += arr[i];
        res = max(sum,res);
        if (129<=sum && sum<=138) cnt++;
    }
    
    cout << cnt <<"\n";
    
}
