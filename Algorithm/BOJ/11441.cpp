//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int testCase, testCase2;
    cin >> testCase;
    
    int arr[100001]={0};
    
    for(int i=1;i<=testCase;i++) {
        int num; cin >> num;
        arr[i] = arr[i-1]+ num;
    }
    
    cin >> testCase2;
    
    for(int i=0;i<testCase2;i++) {
        int x,y; cin >> x >> y;
        cout << arr[y] - arr[x-1] <<"\n";
    }
}
