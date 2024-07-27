//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long N,M; cin >> N >> M;
    
    long long arr[N];
    long long sum[N];
    arr[0] = 0;
    for(int i=1;i<=N;i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N+1);
    
    sum[0] = 0;
    for(int i=1;i<=N;i++) {
        sum[i] = arr[i] + sum[i-1];
    }
    
    for(int i=0;i<M;i++) {
        int L, R;
        cin >> L >> R ;
        cout << sum[R] - sum[L-1] <<"\n";
    }
}
