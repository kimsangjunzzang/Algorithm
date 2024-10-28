//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include<iostream>
using namespace std;

long long int GCD(long long int a, long long int b) {
    if (b==0) return a;
    else return GCD(b,a%b);
}

long long int LCM(long long int a, long long int b) {
    return a * b / GCD(a,b);
}

int main() {
    long long int x,y; cin >> x >> y;
    cout << LCM(x,y) << endl;


}
