//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    
    for(int i=0; i<testCase; i++) {
        
        int num; cin >> num;
        int max = INT_MIN;
        vector<int>v;
        
        for (int j=0;j<num;j++){
            int n; cin >> n;
            v.push_back(n);
        }
        sort(v.begin(), v.end());
        
        for (int j=1;j<v.size();j++){
            if((v[j] - v[j-1])> max) {
                max = v[j] - v[j-1];
            }
        }
        cout << "Class "<<i+1<<endl;
        cout << "Max " <<v[v.size()-1] <<", Min "<<v[0]<<", Largest gap "<<max<<endl;
    }
    
}
