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
int main(){
    map<string,int> m;
    map<string,int>::iterator iter;
    
    int ans = 0;
    int n; cin >> n;
    
    for(int i = 0; i<n; i++){
        string str; cin >> str;
        iter = m.find(str);
        
        if(iter == m.end()){ //map에 없는 경우
            ans++;
            for(int j = 0;j<str.size();j++){
                string temp = "";
                for(int k = j;k<str.size();k++){
                    temp += str[k];
                }
                for(int q = 0; q<j; q++){
                    temp += str[q];
                }
                m.insert({temp,i});
            }
        } else{
            continue;
        }
    }
    cout << ans;
}
