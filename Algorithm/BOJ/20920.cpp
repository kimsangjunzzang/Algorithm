//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

map<string, int> mp;
bool compare(string a, string b) {
    if (a.size() == b.size() && mp[a] == mp[b]) {
        return a < b;
    }
    else if (mp[a] == mp[b]) {
        return a.size() > b.size();
    }
    return mp[a] > mp[b];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector <string> voca;
    string v;
    
    for (int i = 0; i < n; i++) {
        cin >> v;
        if (v.size() < m) continue;
        if (mp.find(v)==mp.end()) {
            mp[v] = 0;
            voca.push_back(v);
        }
        mp[v]++;
    }
    sort(voca.begin(), voca.end(), compare);

    for (int i = 0; i < voca.size(); i++) {
        cout << voca[i] << '\n';
    }
}
