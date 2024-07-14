//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <map>
#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin>> testCase;
    int max = 0;
    string title = "";
    
    map<string,int>m;
    
    for(int i=0;i<testCase;i++) {
        string str;
        cin >> str;
        
        m[str]++;
    }
    
    for(auto it =m.begin();it !=m.end();it++) {
        
        if(it->second > max) {
            max = it->second;
            title = it ->first;
            
        }
    }
    cout<<title<<endl;
}
