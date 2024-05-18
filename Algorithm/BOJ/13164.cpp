//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, K;
    cin>>N>>K;
    
    vector<long long int> v(N);
    vector<long long int> cost(N-1);
    
    for(int i=0; i<N; i++) {
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    
    for(int i=1; i<N; i++){
        cost[i-1] = v[i] - v[i-1];
    }
    
    sort(cost.begin(), cost.end());
    
    long long int ans = 0;
    for(int i=0; i<N-K; i++) {
        ans += cost[i];
    }
    
    cout<<ans;
}
