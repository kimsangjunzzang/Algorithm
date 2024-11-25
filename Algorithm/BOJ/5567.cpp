//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>

using namespace std;

bool visited[501];
vector<int> graph[501];

void DFS(int now, int depth) {

    if (depth == 2) {
        return;
    }
    for (int i = 0; i < graph[now].size(); i++) {
        int next = graph[now][i];
        visited[next] = true;
        DFS(next, depth + 1);
    }
}

int main() {
    int n, m; cin >> n >> m;
    int res = 0;

    for ( int i=0;i<m;i++) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    visited[1] = true;
    DFS(1, 0);

    /// visited == true 갯수 반환 (i==1 일 경우 본인이기에 제외)
    for (int i = 2; i <= n; i++) {
        if (visited[i]) {
            res++;
        }
    }
    cout << res << endl;
}

