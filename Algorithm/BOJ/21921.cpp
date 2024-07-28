//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X,N;
    cin >> N >> X;
    
    int arr[250001];
    arr[0] = 0;
    vector<int>cntArr;
    
    for(int i=1;i<=N;i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    int res = 0;
    int cnt = 0;
    
    for(int i=1;i<=N;i++) {
        if(i > X) {
            sum -= arr[i-X];
        }
        sum += arr[i];
        res = max(sum,res);
        cntArr.push_back(sum);
    }
    for(int i=0;i<cntArr.size();i++){
        if(cntArr[i] == res) cnt++;
    }
    if (res == 0) cout<< "SAD" <<"\n";
    else {
        cout << res <<endl;
        cout << cnt <<endl;
    }
}
