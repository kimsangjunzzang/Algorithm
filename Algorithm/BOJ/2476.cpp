//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    
    int res = 0;
    
    
    for( int i=0;i<testCase;i++) {
        int prize = 0;
        int a,b,c; cin >> a >> b >> c;
        
        if(a == b && b == c) {
            
            prize = 10000 + (a*1000);
            if(prize >  res) res = prize;
        }else if (a != b && b != c && a != c) {
            vector<int>v;
            v.push_back(a); v.push_back(b); v.push_back(c);
            sort(v.begin(),v.end());
            prize = v[2] * 100;
            if(prize >  res) res = prize;
        } else {
            if(a == b) {
                prize = 1000 + a*100;
                if(prize >  res) res = prize;
            }else if(a == c){
                prize = 1000 + a*100;
                if(prize >  res) res = prize;
            }else if (b == c) {
                prize = 1000 + b*100;
                if(prize >  res) res = prize;
            }
        }
        
    }
    cout << res << endl;
}
