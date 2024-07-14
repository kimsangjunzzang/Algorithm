//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <functional>
using namespace std;

map <int, int> order;

bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    if (a.second == b.second)
        return order[a.first] < order[b.first];
    
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, C;
    cin >> N >> C;
    
    map<int, int> m;
    int num;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        m[num]++;
        
        if (order[num] == 0)
            order[num] = i+1;
    }
    
    vector<pair<int, int>> v(m.begin(), m.end());
    
    sort(v.begin(), v.end(), cmp);
    
    for (auto x : v) {
        for (int i = 0; i < x.second; i++) {
            cout << x.first << " ";
        }
    }
    
    return 0;
}
