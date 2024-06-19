//
//  main.cpp
//  boj
//
//  Created by 김상준 on 6/20/24.
//

#include <iostream>
using namespace std;
int main(){
    bool check[10001] = {0};
    int a;
    
    for (int i = 1; i < 10001;i++){
        int sum = 0;
        a = i;
        
        while(a !=0){
            sum += a % 10; // 각 자리 수를 합함
            a /= 10;
        }
        if(i+sum < 10001){
            // 생성자가 있는 곳에 true 표시
            check[i + sum] = true;
        }
    }
    for (int i = 1; i < 10001;i++){
        if(!check[i]){ // 생성자 없는 수 출력
            cout << i << '\n';
        }
    }
        return 0;
}
