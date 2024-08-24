//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    long long N,K; cin >> N >> K;
    string str;
    for(int i=1;i<=N;i++){
       
        str += to_string(i);
        long long num= stoll(str);
        num %= K;
        str = to_string(num);
    }
    
    cout <<str<<endl;
    
}
