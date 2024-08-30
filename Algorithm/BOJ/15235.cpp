//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
//  1 2 3 4 2 4 2 4 4

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    
    vector<int> v(N);
    queue<int> q;
    
    for (int i = 0; i < N; i++){
        cin >> v[i];
        q.push(i);
    }
    
    vector<int> answer(N, 0);
    int t = 0;
    
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        t++;
        if (--v[cur] == 0){
            answer[cur] = t;
        }
        else{
            q.push(cur);
        }
    }
    
    for (int i = 0; i < N; i++){
        cout << answer[i] << " ";
    }
    cout << "\n";
}
