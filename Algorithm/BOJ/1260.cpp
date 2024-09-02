//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

bool visited[1001];
vector<int> graph[1001];
queue<int>q;


int N,M,V; // 정점개수, 간선개수, 시작정점

void dfs(int num) {
    visited[num] = true;
    cout << num << " ";
    
    for( int i=0;i<graph[num].size();i++) {
        int y = graph[num][i];
        if(!visited[y]) dfs(y);
    }
}

void bfs(int num) {
    q.push(num);
    visited[num] = true;
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur <<" ";
        
        for( int i=0;i<graph[cur].size();i++) {
            int y = graph[cur][i];
            if(!visited[y]) {
                visited[y] = true;
                q.push(y);
            }
        }
    }
}

int main() {
    cin >> N >> M >> V;
    
    for( int i=0;i<M;i++) {
        int x,y; cin>> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=1;i<=N;i++){
        sort(graph[i].begin(),graph[i].end());
    }
    
    dfs(V);
    cout << endl;
    memset(visited, false, sizeof(visited));
    bfs(V);
    
}
