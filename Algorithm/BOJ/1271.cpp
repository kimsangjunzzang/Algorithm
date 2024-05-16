//
//  main.cpp
//  1271
//
//  Created by 김상준 on 5/15/24.
//

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c,ret;
    cin >> a >> b >> c;
    
    while (c--) {
        a %= b;
        a *= 10;
        ret = a / b;
    }
    cout << ret <<endl;
    return 0;
}
