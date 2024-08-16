//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;cin >> t;
    
    while (t--) {
        double n;
        cin >> n;
        cout << fixed << setprecision(10) << (n / 6) << endl;
    }
    
    return 0;
}
