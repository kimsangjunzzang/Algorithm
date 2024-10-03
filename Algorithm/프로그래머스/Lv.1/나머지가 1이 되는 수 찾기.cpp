//
//  main.cpp
//  0519
//
//  Created by 김상준 on 5/19/24.
//
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for( int i=1;i<n;i++) {
        if(n % i == 1 ) {
            answer = i ;
            break;
        }
        
    }
    
    return answer;
}
