//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int testCase; cin >> testCase;

    for ( int i=0;i<testCase;i++) {
        string str; cin >>str;
        if(str.length()>=6&&str.size()<=9){
            cout << "yes" <<endl;
        } else {
            cout << "no" <<endl;
        }
    }
}
