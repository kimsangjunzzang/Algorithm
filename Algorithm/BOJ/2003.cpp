//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int N,S; cin >> N >> S;
    int count = 0;
    int arr[10001];

    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }

    int start=0,end=0;
    int sum = arr[0];

    while(start<=end && end<N) {
        if(sum==S) {
            count++;
            end++;
            sum+=arr[end];
        } else if(sum<S) {
            end++;
            sum+=arr[end];
        } else if(sum>S) {
            sum -=arr[start];
            start++;

            if(start>end) {
                end = start;
                sum = arr[end];
            }
        }
    }
    cout << count<<"\n";
    return 0;
}
