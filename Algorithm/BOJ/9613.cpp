//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <vector>
using namespace std;

int GCD(int a,int b) {
    if (b == 0) return a;
    else {
        return GCD(b,a%b);
    }
}

int main() {
    int testCase;
    cin >> testCase;
    
    for(int i=0;i<testCase;i++) {
        int num;
        cin>> num;
        vector<int> v;
        long long sum =0;
        
        for(int j=0;j<num;j++) {
            int n;
            cin >> n;
            v.push_back(n);
           
        }
        
        for(int a =0;a<v.size()-1;a++) {
            for(int b=a+1;b<v.size();b++) {
                sum += GCD(v[a], v[b]);
            }
        }
        cout<<sum<<endl;
    }
}
