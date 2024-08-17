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
    int arr[46];
    arr[0] = 0;
    arr[1] = 1;
    for( int i=2;i<46;i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[num] <<endl;
}
