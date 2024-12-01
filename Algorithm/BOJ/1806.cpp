//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    long long N,S; cin >> N >> S;
    int arr[100001];
    for ( int i=0;i<N;i++) {
        cin >> arr[i];
    }

    long long start = 0, end = 0;
    long long sum = arr[0];
    long long length = LONG_LONG_MAX;

    while(start <= end && end <= N) {
        if(sum >= S) length = min(length,end-start+1);
        if(sum < S) {
            end++;
            sum += arr[end];
        } else {
            sum -= arr[start];
            start++;
        }
    }
    if(length == LONG_LONG_MAX) cout << 0 <<"\n";
    else {
        cout << length <<"\n";
    }
    return 0;
}
