//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

long long x = 1;
long long func(int num);

int main() {
    int num; cin >> num;
    cout<< func(num) <<endl;
}

long long func(int num){
    if (num == 1) return 1;
    if (num == 2) return 1;
    
    return func(num - 1) + func(num - 2);;
}
