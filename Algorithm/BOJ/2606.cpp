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

vector<int>graph[101];
bool check[101];
int cnt = 0; // 감염된 컴퓨터 개수 카운트

void dfs(int num){
    check[num] = true;
    
    for( int i=0;i<graph[num].size();i++) {
        int y = graph[num][i];
        // 1 로 인해 감염된 컴퓨터를 카운터하는 문제이기에 cnt는 check가 false 일때 증가한다.
        if(!check[y]) {
            cnt ++;
            dfs(y);
        }
        
    }
}

int main() {
    int V; cin >> V; // 원점
    int N; cin >> N; // 간선
    
    for( int i=0;i<N;i++) {
        int from, to; cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    dfs(1);
    cout << cnt <<endl;
    
    return 0;
}
