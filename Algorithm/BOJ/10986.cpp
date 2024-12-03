//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    long long N,S; cin >> N >> S;
    long long arr[1000001]= {0};
    long long sum = 0, cnt = 0;

    for ( long long i=0;i<N;i++) {
        int num; cin >> num;
        sum += num;
        arr[sum % S]++;
        if(sum % S==0) cnt++;
    }

    for (int i = 0; i < S; i++) {
        cnt += arr[i] * (arr[i] - 1) / 2;
    }
    cout << cnt << "\n";
}
