//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;



int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int>> mn;
    
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        
        if(mx.empty()){
            mx.push(x);
        }else if(mx.size() == mn.size()) {
            mx.push(x);
        } else{
            mn.push(x);
        }
        
        if(!mx.empty() && !mn.empty() && (mx.top() > mn.top())) {
            int a = mx.top();
            int b = mn.top();
            
            mx.pop();
            mn.pop();
            
            mx.push(b);
            mn.push(a);
        }
        cout << mx.top() << '\n';
    }
    return 0;
}
