//
//  main.cpp
//  1246
//
//  Created by 김상준 on 7/1/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int N, M, max = 0, idx;
    cin>>N>>M;
    int * arr = new int[M];

    for(int i=0; i<M; i++){
        cin>>arr[i];
    }

    sort(arr, arr + M, greater<int>());

    for(int i=0; i<M; i++){
        if(i < N){
            if(arr[i] * (i+1) > max){
                max = arr[i] * (i+1);
                idx = i;
            }
        } else {
            break;
        }
    }
    cout<<arr[idx]<<" "<<max;
   

    return 0;
}
