//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    long arr[100000];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    long answer = 0;
    long psum[100000];

    psum[0] = arr[0];

    for (int i = 1; i < N; ++i) {
        psum[i] = psum[i - 1] + arr[i];
    }

    for (int i = 0; i < N - 1; ++i) {
        answer += arr[i] * (psum[N - 1] - psum[i]);
    }

    cout << answer;

}
