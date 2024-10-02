//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int a,b; cin >> a >> b;
    if( a == 2 && b == 18) cout << "Special" <<endl;
    else if(a > 2) {
        cout << "After" <<endl;
    }else if(a == 2){
        if(b < 18) {
            cout << "Before" <<endl;
        } else if(b > 18) {
            cout << "After" <<endl;
        }
    }else {
        cout << "Before" <<endl;
    }
}
