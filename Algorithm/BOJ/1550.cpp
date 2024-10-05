//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string s; cin >> s;
    int num = 0;

    for (int i = 0; i < s.length(); ++i) {
        num *= 16;

        if (s[i] >= 'A' && s[i] <= 'F') {
            num += s[i] - 'A' + 10;
        }
        else {
            num += s[i] - '0';
        }
    }
    cout << num << endl;

    return 0;
}
