//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int testCase, queNum;
    cin >> testCase >> queNum;
    
    map<string, string>m;
    for(int i=0;i<testCase;i++) {
        string team, member ;
        cin >> team;
        int num;
        cin>> num;
        for(int j=0;j<num;j++) {
            cin>>member;
            m[member] = team;
        }
    }
    for(int i=0;i<queNum;i++) {
        string que;
        int type ;
        cin>>que>>type;
        
        if(type == 0) {
            // 팀 입력
            for(auto it = m.begin();it !=m.end();it++) {
                // 팀원 출력
                if(it -> second == que) cout<< it->first<<"\n";
            }
        }
        else if(type == 1) {
            // 팀원 입력
            for(auto it = m.begin();it !=m.end();it++) {
                // 팀원 출력
                if(it -> first == que) cout<< it->second<<"\n";
            }
        }
    }
}
