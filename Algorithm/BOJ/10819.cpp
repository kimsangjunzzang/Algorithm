//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/3/24.
//

#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void printV(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    int testCase;
    cin>> testCase;
    
    
    int max = 0;
    
    vector<int> v;
    
    for(int i=0;i<testCase;i++) {
        int num;
        cin>> num;
        
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    while(next_permutation(v.begin(), v.end())){
        int sum = 0;
        for(int i=1;i<v.size();i++) {
            if ((v[i-1] - v[i])<0){
                sum += -(v[i-1] - v[i]);
            }else sum += v[i-1] - v[i];
            
            if(sum > max) max = sum;
        }
    }
    cout<<max<<endl;
    
    
    return 0;
}
