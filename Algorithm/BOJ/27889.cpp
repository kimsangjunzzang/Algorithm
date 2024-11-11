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
    if(str == "NLCS") {
        cout << "North London Collegiate School" << endl;

    } else if(str == "BHA") {
        cout << "Branksome Hall Asia" << endl;

    } else if(str == "KIS") {
        cout << "Korea International School" << endl;

    } else {
        cout << "St. Johnsbury Academy" << endl;

    }
}
