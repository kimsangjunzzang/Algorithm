#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValidChessboard(const vector<string>& board) {
    int rowFlags = 0;
    int colFlags = 0;
    vector<pair<int, int>> queenPositions;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != '*') {
                continue;
            }
            
            if (rowFlags & (1 << i) || colFlags & (1 << j)) {
                return false;
            }
            
            for (const auto& q : queenPositions) {
                if (abs(q.first - i) == abs(q.second - j)) {
                    return false;
                }
            }
            
            rowFlags |= (1 << i);
            colFlags |= (1 << j);
            queenPositions.emplace_back(i, j);
        }
    }
    
    return queenPositions.size() == 8;
}

int main() {
    vector<string> chessboard(8);
    
    for (int i = 0; i < 8; i++) {
        cin >> chessboard[i];
    }
    
    if (isValidChessboard(chessboard)) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }
    
    return 0;
}
