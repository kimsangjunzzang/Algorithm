//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str; cin >> str;
    int cnt =0;
    
    for(int i=0;i<str.size();i++) {
        if (str[i] != str[str.size()-i-1]) cnt++;
    }
    
    if( cnt !=0) cout << "0"<<endl;
    else cout << "1"<<endl;
}
