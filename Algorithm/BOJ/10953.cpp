//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCase; cin >> testCase;

    for ( int i=0;i<testCase;i++) {
        string str; cin >> str;
        string a = str.substr(0,1);
        string b = str.substr(2,1);

        int A = stoi(a);
        int B = stoi(b);
        cout << A + B << endl;
    }
}
