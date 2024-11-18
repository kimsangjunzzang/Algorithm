//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if(n == 1) return false;
    else {
        for(int i = 2; i < n; i++) {
            if(n % i == 0) return false;
        }
    }
    return true;
}

int main() {
    int a,b; cin >> a >> b;
    int sum = 0;
    for ( int i=a;i<=b;i++) {
        if(IsPrime(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}
