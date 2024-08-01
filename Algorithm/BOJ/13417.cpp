//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <deque>
using namespace std;

int main(){
    int testCase;
    char card[1001];
    cin >> testCase;
    
    for(int i=0; i<testCase; i++){
        deque <char> q;
        deque <char>::iterator iter;
        int N;cin >> N;
        
        for(int j=0; j<N; j++){
            cin >> card[j];
            if(j==0){
                q.push_back(card[0]);
            }
            else if(card[j]<=(q.front())){
                q.push_front(card[j]);
            }
            else{
                q.push_back(card[j]);
            }
        }
        
        for(iter = q.begin(); iter != q.end(); iter++){
            cout << *iter;
        }
        cout << "\n";
    }
}
