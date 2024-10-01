//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;

int main() {
    int a,b;
    
    while(1){
        cin >> a >> b;
        if(a==0 && b==0) {
            break;
        }
        if(a >b) cout << "Yes"<<endl;
        else cout << "No" << endl;
        
    }
}
