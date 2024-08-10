//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

long long arr[1000001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        reverse(str.begin(), str.end()); // 거꾸로 뒤집음  
        arr[i] = stol(str); // long long형으로 변환
    }
    sort(arr, arr + n); // 정렬
    for(int i = 0 ; i < n; i++) cout << arr[i] << "\n";}
