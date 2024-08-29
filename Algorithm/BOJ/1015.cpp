//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int size; cin >> size;
    
    vector<pair<int, int>> val_index;
    
    for (int i = 0; i < size; i++){
        int a_val;cin >> a_val;
        val_index.push_back(make_pair(a_val, i));
    }
    sort(val_index.begin(), val_index.end());
    
    vector<int> p(size);
    for (int i = 0; i < size; i++)
        p[val_index[i].second] = i;
    
    for (auto a : p){
        cout << a << ' ';
    }
}


