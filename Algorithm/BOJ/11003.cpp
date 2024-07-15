//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, l;
    cin >> n >> l;
    deque<pair<int,int>>dq;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (!dq.empty() && dq.front().second < i - l + 1) {
            dq.pop_front();
        }
        while (!dq.empty() && dq.back().first > x) {
            dq.pop_back();
        }
        
        dq.push_back({ x, i });
        cout << dq.front().first << " ";
    }
}
