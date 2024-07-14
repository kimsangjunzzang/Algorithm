//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include<iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;
    map<string,int> m;
    int cnt =0;
    int res = 0;
    
    for(int i=0;i<str.length();i++) {
        string sum;
        sum = str[i];
        m[sum]=cnt;
        
        for(int j=i+1;j<str.length();j++) {
            if (j == 0){
                continue;
            }
            sum+=str[j];
            cnt++;
            m[sum]=cnt;
        }
    }
    for(auto iter = m.begin(); iter != m.end();iter++){
        res++;
    }
    cout<<res<<endl;
}
