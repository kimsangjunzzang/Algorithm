//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int num; cin >> num;
    string str = "WelcomeToSMUPC";
    int n = num - 1;

    cout <<str[n%14]<<endl;
}
