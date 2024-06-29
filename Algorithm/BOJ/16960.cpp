//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 6/29/24.

#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> vec;
int lamp[2010];

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m;
    vec.push_back(vector<int>(0));
    
    int a, b;
    for (int i = 1; i < n + 1; i++){
        cin >> a;
        vector<int> temp;
        for (int j = 0; j < a; j++){
            cin >> b;
            lamp[b]++;
            temp.push_back(b);
        }
        vec.push_back(temp);
    }
    
    for (int i = 1; i < n + 1; i++) {
        bool flag = 1;
        
        for (int j = 0; j < vec[i].size(); j++) {
            if (lamp[vec[i][j]] - 1 <= 0) {
                flag = 0;
                break;
            }
        }
        
        // n번째 스위치를 확인해봤을 때,
        // 해당 스위치를 안눌러도 모든 램프가 켜져있다면
        // N - 1개의 스위치를 눌러도 모든 램프가 켜진다.
        if (flag) {
            cout << 1;
            return 0;
        }
    }
    
    cout << 0;
    return 0;
}

