//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if(n<3){
        cout << 4 <<endl;
    }

    for(int i=2; i<n; i++) {
        if(n<=i*i) {
            cout << (i-1)*4;
            break;
        } else if(n<=i*(i+1)) {
            cout << (i-1)*4+2<< endl;
            break;
        }
    }
}
