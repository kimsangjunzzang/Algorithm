//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <map>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    // 키를 기준으로 내림차순 정렬
    map<string, string, greater<>> m;
    
    int testCase;
    cin >> testCase;
    
    // 입력
    for(int i = 0; i<testCase; i++){
        string name, status;
        cin >> name >> status;
        m[name] = status;
    }
    
    map<string, string>::iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        if(it->second == "enter"){
            cout << it->first << "\n";
        }
    }
    
    return 0;
}
