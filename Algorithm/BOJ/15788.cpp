//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int N, emptyRow, emptyCol;
vector<vector<ll>> map;
ll targetSum = 0;

void input() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    map.resize(N, vector<ll>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> map[i][j];
            if (map[i][j] == 0) {
                emptyRow = i;
                emptyCol = j;
            }
        }
    }
}

ll calculateRowSum(int row) {
    ll rowSum = 0;
    for (int j = 0; j < N; ++j) {
        rowSum += map[row][j];
    }
    return rowSum;
}

void fillEmptyCell() {
    // 0이 없는 첫 두 행 중 하나의 합을 기준 합(targetSum)으로 사용
    targetSum = max(calculateRowSum(0), calculateRowSum(1));

    // 빈 칸이 포함된 행의 합 계산
    ll currentSum = calculateRowSum(emptyRow);

    // 빈 칸에 채워야 할 값 계산
    map[emptyRow][emptyCol] = targetSum - currentSum;
}

bool isMagicSquare() {
    // 행과 열의 합 검증
    for (int i = 0; i < N; ++i) {
        if (calculateRowSum(i) != targetSum) return false;

        ll colSum = 0;
        for (int j = 0; j < N; ++j) {
            colSum += map[j][i];
        }
        if (colSum != targetSum) return false;
    }

    // 대각선 합 검증
    ll leftDiagonalSum = 0, rightDiagonalSum = 0;
    for (int i = 0; i < N; ++i) {
        leftDiagonalSum += map[i][i];
        rightDiagonalSum += map[i][N - 1 - i];
    }
    return leftDiagonalSum == targetSum && rightDiagonalSum == targetSum;
}

int main() {
    input();
    fillEmptyCell();

    if (isMagicSquare()) {
        cout << map[emptyRow][emptyCol];
    } else {
        cout << -1;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int N, emptyRow, emptyCol;
vector<vector<ll>> map;
ll targetSum = 0;

void input() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    map.resize(N, vector<ll>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> map[i][j];
            if (map[i][j] == 0) {
                emptyRow = i;
                emptyCol = j;
            }
        }
    }
}

ll calculateRowSum(int row) {
    ll rowSum = 0;
    for (int j = 0; j < N; ++j) {
        rowSum += map[row][j];
    }
    return rowSum;
}

void fillEmptyCell() {
    // 0이 없는 첫 두 행 중 하나의 합을 기준 합(targetSum)으로 사용
    targetSum = max(calculateRowSum(0), calculateRowSum(1));

    // 빈 칸이 포함된 행의 합 계산
    ll currentSum = calculateRowSum(emptyRow);

    // 빈 칸에 채워야 할 값 계산
    map[emptyRow][emptyCol] = targetSum - currentSum;
}

bool isMagicSquare() {
    // 행과 열의 합 검증
    for (int i = 0; i < N; ++i) {
        if (calculateRowSum(i) != targetSum) return false;

        ll colSum = 0;
        for (int j = 0; j < N; ++j) {
            colSum += map[j][i];
        }
        if (colSum != targetSum) return false;
    }

    // 대각선 합 검증
    ll leftDiagonalSum = 0, rightDiagonalSum = 0;
    for (int i = 0; i < N; ++i) {
        leftDiagonalSum += map[i][i];
        rightDiagonalSum += map[i][N - 1 - i];
    }
    return leftDiagonalSum == targetSum && rightDiagonalSum == targetSum;
}

int main() {
    input();
    fillEmptyCell();

    if (isMagicSquare()) {
        cout << map[emptyRow][emptyCol];
    } else {
        cout << -1;
    }

    return 0;
}

