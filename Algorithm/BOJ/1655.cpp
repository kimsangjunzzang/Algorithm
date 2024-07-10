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

/*
 최소힙과 최대힙으로 중앙값 구하는 방법
 1. 최대힙의 크기는 최소합의 크기보다 하나 더 크거나 같아야 합니다.
 2. 최대힙의 최대 원소는 최소힙의 최소원소보다 작거나 같아야 합니다.
 */

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int testCase;
    cin >> testCase;
    
    priority_queue<int> mx; // 최대힙
    priority_queue<int, vector<int>, greater<int>> mn; // 최소힙
    
    for(int i=0; i<testCase; i++) {
        int num;
        cin >> num;
        
        // 최대힙이 비어있을 경우 최대힙 추가
        if(mx.empty()){
            mx.push(num);
        }
        // 최대힙과 최소힙 크기가 같을 경우 최대힙 추가
        else if(mx.size() == mn.size()) {
            mx.push(num);
        }
        // 최소힙의 크기가 작을 경우 최소힙 추가
        else{
            mn.push(num);
        }
        // 최대힙 최대 원소가 최소힙 최대 원소보다 클 경우
        if(!mx.empty() && !mn.empty() && (mx.top() > mn.top())) {
            //SWAP
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
