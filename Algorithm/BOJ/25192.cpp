//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    
    map<string, int>m;
    int cnt = 0;
    
    for( int i=0;i<testCase;i++) {
        string str; cin >>str;
        
        if( str == "ENTER") {
            cnt += m.size();
            m.clear();
        } else {
            m[str] = i;
            
        }
    }
    cnt += m.size();
    
    cout << cnt << endl;
    
}
