//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    long long testCase; cin >> testCase;
    vector<long long>v(testCase);
    
    for( long long i=0;i<testCase;i++) {
        cin >> v[i];
    }
    
    long long B,C; cin >> B >> C;
    long long cnt = 0;
    
    
    
    for( long long i=0;i<v.size();i++){
        v[i] -= B; cnt++;
        
        if(v[i] > C){
            long long k = v[i] / C;
            if(v[i] % C != 0){
                cnt += k+1;
            }else {
                cnt += k;
            }
        } else if(v[i] >0 && v[i] <= C) {
            cnt++;
        } else {
            continue;
        }
    }
    cout << cnt <<"\n";
}
