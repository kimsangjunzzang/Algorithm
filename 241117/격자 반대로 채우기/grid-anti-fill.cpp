#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    
    // n x n 격자 초기화
    vector<vector<int>> grid(n, vector<int>(n));
    int val = 1; // 1부터 n^2까지 값을 채워넣음

    // 오른쪽 아래에서부터 왼쪽으로 열을 채워나감
    for (int col = n - 1; col >= 0; col--) {
        if (col % 2 == 0) {
            // 짝수 열: 위에서 아래로 채움
            for (int row = 0; row < n; row++) {
                grid[row][col] = val++;
            }
        } else {
            // 홀수 열: 아래에서 위로 채움
            for (int row = n - 1; row >= 0; row--) {
                grid[row][col] = val++;
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}