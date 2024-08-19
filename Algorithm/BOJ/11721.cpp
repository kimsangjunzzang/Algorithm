//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
    for(int i=0;i<str.size();i++) {
        if (i % 10 == 0 && i != 0){
            cout <<endl;
        }
            cout<<str[i];
        
    }
    cout <<endl;
}
