//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int testCase;
    cin>> testCase;
    map<string,int> m;
    
    for(int i=0;i<testCase;i++) {
        string str;
        cin >> str;
        m[str]++;
    }
    for(int i=0;i<testCase -1 ;i++) {
        string str;
        cin >> str;
        m[str]--;
    }
    for(auto it = m.begin();it != m.end();it++) {
        if(it -> second != 0) cout<<it->first<<endl;
    }
}
