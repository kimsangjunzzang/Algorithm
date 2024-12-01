//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for ( int i=0;i<10;i++) {
        int num; cin >> num;
        int temp = sum;
        sum+=num;
        // sum이 100 보다 큰 경우
        if(sum > 100) {
            if(100-temp < sum - 100 ) {
                cout << temp << endl;
                return 0;
            } else {
                cout << sum << endl;
                return 0;
            }
        }
    }
    // sum이 100 보다 작은 경우
    cout << sum << endl;
    return 0;
}
