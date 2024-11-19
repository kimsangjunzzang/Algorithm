#include <iostream>
#include <vector>
using namespace std;

// 수열 B가 수열 A의 연속 부분 수열인지 확인하는 함수
bool isSubsequence(const vector<int>& A, const vector<int>& B) {
    int n1 = A.size(), n2 = B.size();
    for (int i = 0; i <= n1 - n2; ++i) { // 가능한 시작 위치 탐색
        bool match = true;
        for (int j = 0; j < n2; ++j) { // 연속 부분 비교
            if (A[i + j] != B[j]) {
                match = false;
                break;
            }
        }
        if (match) return true; // 일치하는 경우
    }
    return false; // 끝까지 일치하지 않으면 false
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    vector<int> A(n1), B(n2);
    
    // 수열 A 입력
    for (int i = 0; i < n1; ++i) {
        cin >> A[i];
    }
    
    // 수열 B 입력
    for (int i = 0; i < n2; ++i) {
        cin >> B[i];
    }
    
    // 결과 출력
    if (isSubsequence(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
