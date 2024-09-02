//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

long long x = 1;

void func(int num){
    if(num == 0) return ;
    x *= num;
    func(num-1);
}

int main() {
    int num; cin >> num;
    func(num);
    cout<< x<<endl;
    
}
