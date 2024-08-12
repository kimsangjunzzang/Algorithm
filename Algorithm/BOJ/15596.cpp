//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <vector>
 
long long sum(std::vector<int> &a) {
    long long ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans += a[i];
    }
    return ans;
}
