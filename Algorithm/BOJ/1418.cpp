//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main(){
    int arr[100010] = {0};
    int n,k; cin >> n >> k;
    int cnt=0;

    for(int i=2;i<=n;i++) {
        if(arr[i]) continue;
        for(int j=i;j<=n;j+=i) {
            arr[j]=max(arr[j],i);
        }
    }
    for(int i=1;i<=n;i++) {
        if(arr[i]<=k) cnt++;
    }
    cout << cnt<< endl;
}
