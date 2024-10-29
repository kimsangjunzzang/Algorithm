//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testCase; cin >> testCase;

    int ball[] = {0, 1, 0, 0};

    for (int i = 0; i < testCase; i++) {
        int a, b; cin >> a >> b;
        swap(ball[a], ball[b]);
    }

    for (int i = 1; i < 4; i++) {
        if (ball[i] == 1) cout << i;
    }
}

