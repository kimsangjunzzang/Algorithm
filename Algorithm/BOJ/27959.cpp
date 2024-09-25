//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num; cin >> num;
    int cnt; cin >> cnt;
    
    if(num*100/cnt>0) cout << "Yes"<<endl;
    else cout << "No"<<endl;
}
