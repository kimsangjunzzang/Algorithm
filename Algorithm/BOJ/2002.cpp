//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    vector<int> f(n);
    
    map<string, int> m;
    
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        m[name] = i;
    }
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        f[i] = m[name];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            
            if (f[i] > f[j]) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt<<"\n";
}
