//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int testCase;
    int ret;
    vector<pair<int,int>> v;
    
    cin >> testCase;
    while(testCase--){
        int num;cin >> num;
        v.clear();
        
        for(int i=0; i<num; i++){
            int a,b;
            cin >> a >> b;
            v.push_back({a,b});
        }
        sort(v.begin(), v.end());
        
        int tmp = 0;
        ret = 1;
        
        for(int i=1; i<num; i++){
            if(v[tmp].second > v[i].second){
                ret++;
                tmp = i;
            }
        }
        cout << ret << '\n';
    }
    return 0;
}
