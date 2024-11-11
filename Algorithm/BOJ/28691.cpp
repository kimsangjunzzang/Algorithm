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
    if(str == "M") {
        cout << "MatKor" << endl;

    } else if(str == "W") {
        cout << "WiCys" << endl;

    } else if(str == "C") {
        cout << "CyKor" << endl;

    } else if(str == "A") {
        cout << "AlKor" << endl;

    } else {
        cout << "$clear" << endl;

    }
}
