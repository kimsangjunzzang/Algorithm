//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n;
vector<pair<int, int>> arr; // 좌표와 상태를 저장하는 pair

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // 입력 받기
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, s;
        cin >> x >> s;
        arr.push_back(make_pair(x, s)); // pair로 좌표와 상태 저장
    }

    // x값을 기준으로 정렬 (pair를 사용할 경우, 첫 번째 값 기준으로 정렬됨)
    sort(arr.begin(), arr.end());

    int R = INT_MAX;

    // 인접한 두 pair를 비교하여 최소 간격 R 구하기
    for (int i = 1; i < n; i++) {
        int now_x = arr[i - 1].first;
        int now_s = arr[i - 1].second;
        int next_x = arr[i].first;
        int next_s = arr[i].second;

        // 상태가 0인 경우만 처리
        if (now_s == 0 || next_s == 0) {
            if (now_s == 0 && next_s == 0) continue; // 둘 다 0이면 패스
            R = min(next_x - now_x, R); // 최소 간격 갱신
        }
    }

    R--; // 경계 처리

    int res = 1; // 최소 그룹 수는 1로 시작
    // 각 pair 사이의 간격을 기준으로 그룹 나누기
    for (int i = 1; i < n; i++) {
        int now_x = arr[i - 1].first;
        int next_x = arr[i].first;
        int next_s = arr[i].second;

        // R보다 큰 간격이면서 상태가 1인 경우 그룹을 추가
        if (next_x - now_x > R && next_s == 1) {
            res++;
        }
    }

    // 결과 출력
    cout << res << "\n";
   
}
