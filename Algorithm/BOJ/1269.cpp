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
    int A,B;
    cin >> A >> B ;
    int cnt =0;
    map<int, int> m;
    
    for(int i=0;i<A;i++) {
        int x ; cin >> x;
        m[x] = 1;
    }
    for(int i=0;i<B;i++) {
        int x; cin >> x;
        m[x] =1;
    }
    cnt += m.size() - A;
    cnt += m.size() - B;

    cout << cnt <<endl;
}
