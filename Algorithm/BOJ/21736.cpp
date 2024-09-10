//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <queue>
using namespace std;

// 상수로 설정하여 가독성 향상
const int MAX_SIZE = 601;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int N, M;                  // N: 세로 크기, M: 가로 크기
int startX, startY;        // 시작 지점 좌표
int answer = 0;            // 찾은 'P'의 개수

char Map[MAX_SIZE][MAX_SIZE]; // 지도 정보
bool visited[MAX_SIZE][MAX_SIZE]; // 방문 여부 저장

queue<pair<int, int>> q;   // BFS 탐색을 위한 큐

void BFS(int startX, int startY) {
    q.push( {startX, startY} );
    visited[startY][startX] = true;
    
    while (!q.empty()) {
        
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            // 지도 범위 밖이거나 이미 방문했을 경우 스킵
            if (nx < 0 || nx >= M ||
                ny < 0 || ny >= N ||
                visited[ny][nx]) {
                continue;
            }
            visited[ny][nx] = true;
            
            // 빈 공간 'O'이거나 사람 'P'일 경우 이동
            if (Map[ny][nx] == 'O' || Map[ny][nx] == 'P') {
                q.push({nx, ny});
            }
            
            // 사람 'P'를 찾으면 카운트 증가
            if (Map[ny][nx] == 'P') {
                answer++;
            }
        }
    }
}

void solve() {
    BFS(startX, startY);
    
    // 답이 없을 경우 'TT' 출력
    if (answer == 0) {
        cout << "TT" << '\n';
    } else {
        cout << answer << '\n';
    }
}

void init() {
    cin >> N >> M;
    
    // 지도 입력 및 시작점 설정
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Map[i][j];
            
            if (Map[i][j] == 'I') {
                startX = j;
                startY = i;
            }
        }
    }
}

int main() {
    init();  // 초기화
    solve(); // 문제 해결
}
