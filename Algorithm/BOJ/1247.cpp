//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;
int main() {
    for (int k = 0; k < 3; k++) {
        int testCase; cin >> testCase;
        long long sum = 0, flow=0;

        for (int i = 0; i < testCase; i++) {
            long long num; cin >> num;
            long long temp = sum;
            sum += num;

            if (num > 0 && temp > 0 && sum < 0) flow++;
            if (num < 0 && temp < 0 && sum > 0) flow--;
        }

        if (flow == 0) {
            if (sum == 0) cout << '0' << endl;
            else if(sum > 0) {
                cout << "+" <<endl;
            } else {
                cout << "-" <<endl;
            }
        } else {
            if (flow > 0) cout << "+"<<endl;
            else {
                cout << "-" <<endl;
            }
        }
    }
}
