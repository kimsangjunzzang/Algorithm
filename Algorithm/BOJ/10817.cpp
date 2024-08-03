//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
    vector<int> v;
    
    for(int i=0;i<3;i++) {
        int num; cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << v[1] << endl;
}
