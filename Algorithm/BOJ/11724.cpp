//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int>graph[1001];
bool checked[1001];

void dfs(int num) {
    checked[num] = true;
    for (int i=0;i<graph[num].size();i++) {
        int y = graph[num][i];
        if(!checked[y]) dfs(y);
    }
}

int main() {
    int N, M; cin >> N >> M;
    int cnt = 0;
    
    for(int i=0;i<M;i++) {
        int to,from; cin >> to >> from;
        graph[to].push_back(from);
        graph[from].push_back(to);
    }
    
    for (int i = 1; i <= N; i++){
        if (!checked[i]) {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << "\n";
    dfs(1);
}
