//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    long long N,M;
    cin >> N >> M;
    long long arr[N];
    arr[0] = 0;
    vector<long long>v(N-M+1);
    
    for(int i=1;i<=N;i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    long long res = 0;
    
    for(int i=1;i<=N;i++) {
        if(i > M) {
            sum -= arr[i-M];
            sum += arr[i];
            v.push_back(sum);
        } else {
            sum += arr[i];
            if(i == M) v.push_back(sum);
        }
        
    }
    sort(v.begin(), v.end());
    cout << v.back() << endl;
    
}
