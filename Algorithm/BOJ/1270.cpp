//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <map>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    while(n--) {
        map<long long, int> land;
        long long cur; cin >> cur;
        
        long long landNum = 0;
        long long maxNum = -1;
        
        for(int i = 0; i < cur; i++) {
            long long num; cin >> num;
            land[num]++;
            if(land[num] > maxNum) {
                maxNum = land[num];
                landNum = num;
            }
        }
        
        if(maxNum > cur/2) cout << landNum << '\n';
        else cout << "SYJKGW" << '\n';
    }
}
