//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    map<int, int> m;
    
    // 첫 번째 집합의 원소를 입력받아 map에 저장
    for (int i = 0; i < A; ++i) {
        int x; cin >> x;
        m[x]++;
    }
    
    // 두 번째 집합의 원소를 입력받아 map에서 삭제
    for (int i = 0; i < B; ++i) {
        int x; cin >> x;
        auto it = m.find(x);
        if (it != m.end()) {
            m.erase(it);
        }
    }
    cout << m.size() <<endl;
    for(auto it = m.begin();it !=m.end();it++){
        
        cout<< it->first <<" ";
    }
    
    return 0;
}
