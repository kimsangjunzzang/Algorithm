//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//

#include <iostream>
using namespace std;
 
int main() {
    long long S;
    int num = 1;
    int cnt = 0;
    long long sum = 0;
    
    cin >> S;
    
    while(1){
        sum += num;
        cnt++;
        
        if(sum > S){
            cnt--;
            break;
        }
        num++;
    }
    cout << cnt << '\n';
    return 0;
}
