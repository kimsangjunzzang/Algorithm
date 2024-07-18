//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N, num;

    cin >> M;
    int arr[M];
    
    for(int i = 0; i < M; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + M);

    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        if(binary_search(arr, arr + M, num)){
            cout << '1' << ' ';
        }
        else{
            cout << '0' << ' ';
        }
    }
}
