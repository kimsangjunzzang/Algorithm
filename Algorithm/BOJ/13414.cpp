//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    map<string,int>m;
    vector<pair<int,string>> v;
    
    int k, L;
    cin >> k >> L;
    
    for (int i = 0; i < L; i++) {
        string number;
        cin >> number;
        m[number] = i + 1;
    }
    
    for (auto i = m.begin(); i != m.end(); i++) {
        string a = i->first;
        int b = i->second;
        v.push_back({ b,a });
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < min(k,(int)v.size()); i++) {
        cout << v[i].second << "\n";
    }
}
