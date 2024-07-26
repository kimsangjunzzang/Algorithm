//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
using namespace std;

int main() {
    int N, K, ans = 0;
    int sum = 0;
    int arr[1000001] = {0};

    cin >> N >> K;
    K = 2 * K + 1;
    
    for (int i = 0; i < N; i++) {
        int g, x;
        cin >> g >> x;
        arr[x] = g;
    }
   
    for (int i = 0; i <= 1000000; i++) {
        if (i >= K) {
            sum -= arr[i - K];
        }
        sum += arr[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
