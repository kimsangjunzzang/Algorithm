//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int arr1[1000002];
    int arr2[1000002];
    int N, M;
    
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    } // 입력 1
    for (int i = 0; i < M; i++) {
        cin >> arr2[i];
    } // 입력 2
    
    int i = 0, j = 0;
    
    while (i < N && j < M) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        }
        else {
            cout << arr2[j++] << " ";
        }
    }
    
    while (i < N) cout << arr1[i++] << " ";
    while (j < M)cout << arr2[j++] << " ";
    
}
