//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    string res;
    for ( int i=str.size()-1;i>=0;i--) {
        res += str[i];
    }
    cout << res <<endl;
}
