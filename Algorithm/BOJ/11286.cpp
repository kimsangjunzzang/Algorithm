//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Compare {
    bool operator()(int a,int b) {
        
        //절댓값이 같다면 같은 것 중에서 최소값 반환
        if (abs(a) == abs(b)) {
            return a > b;
        }
        //절댓값이 다르다면
        else {
            //절댓값 중에 작은 값 반환
            return abs(a) > abs(b);
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    priority_queue<int, vector<int>, Compare> pq;
    int testCase;
    cin >>testCase;
    
    for (int i = 0; i < testCase; i++) {
        int x;
        cin >> x;
        
        if (x == 0) {
            //큐가 비어있다면 0 출력
            if (pq.empty()) {
                cout << "0" << '\n';
            }
            // 아니라면 top 출력 이후 제거
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(x);
        }
    }
}

