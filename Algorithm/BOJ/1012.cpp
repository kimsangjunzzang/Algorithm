//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int board[51][51];  // 배추밭을 표현하는 배열 (최대 50x50 크기)
int visited[51][51];  // 방문 여부를 체크하는 배열
int dy[4] = { 0, 1, 0, -1 };  // y축 이동을 위한 배열 (오른쪽, 아래, 왼쪽, 위)
int dx[4] = { 1, 0, -1, 0 };  // x축 이동을 위한 배열

void dfs(int y, int x) {
    for (int i = 0; i < 4; i++) {  // 상하좌우 네 방향을 확인
        int newY = y + dy[i];  // 새로운 y좌표
        int newX = x + dx[i];  // 새로운 x좌표
        if (visited[newY][newX] == 0 && board[newY][newX] == 1) {  // 방문 안 했고, 배추가 있다면
            visited[newY][newX] = 1;  // 방문 처리
            dfs(newY, newX);  // 재귀적으로 연결된 배추 탐색
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int testCase; cin >> testCase;
    
    while (testCase--) {
        int cnt = 0;  // 배추 군집의 수
        int M, N, K; cin >> M >> N >> K;  // 배추밭의 가로 M, 세로 N, 배추의 수 K 입력
        
        memset(board, 0, sizeof(board));  // 배추밭 배열 초기화
        memset(visited, 0, sizeof(visited));  // 방문 배열 초기화
        
        for (int i = 0; i < K; i++) {
            int x, y; cin >> x >> y;  // 배추가 심어진 좌표 입력
            board[y][x] = 1;  // 해당 좌표에 배추 표시
        }
        // 전체 배추밭을 순회하며 탐색
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (board[i][j] == 1 && visited[i][j] == 0) {  // 배추가 있고, 아직 방문하지 않은 경우
                    visited[i][j] = 1;  // 방문 처리
                    dfs(i, j);  // 연결된 배추를 탐색
                    cnt++;  // 군집을 찾았으므로 카운트 증가
                }
            }
        }
        cout << cnt << '\n';  // 각 테스트 케이스별로 군집의 수 출력
    }
}

