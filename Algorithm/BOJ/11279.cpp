//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    priority_queue<int,vector<int>,less<int>>pq;
    
    int testCase;
    cin>>testCase;
    
    for (int i = 0; i < testCase; i++) {
        int num;
        cin >> num;
        
        if (num >= 1) {
            pq.push(num);
        }
        
        else if (num == 0) {
            
            if (pq.empty()) {
                cout<<0<<"\n";
            }else {
                cout<<pq.top()<<"\n";
                pq.pop();
            }
            
        }
        
    }
    return 0;
}
