//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int l = 1, r = 1, sum = 1, res;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase; cin >> testCase;

    while (r <= testCase){
        if (sum < testCase){
            sum += (++r);
        }
        else if (sum > testCase){
            sum -= (l++);
        }
        else{
            res++;
            sum += (++r);
            sum -= (l++);
        }
    }

    cout << res;

    return 0;
}
