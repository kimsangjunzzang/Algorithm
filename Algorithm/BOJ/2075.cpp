//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int num; cin >> num;
    vector<int>v(num*num);

    for ( int i=0;i<num*num;i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    cout << v[num-1];

}
