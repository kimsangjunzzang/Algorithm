//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    int num;
    cin >> num;
    for(int i=0;i<num;i++) {
        int x;
        cin>>x;
        m[x]=i;
    }
    for(auto iter = m.begin();iter != m.end();iter++) {
        cout << iter -> first <<" ";
    }
}
