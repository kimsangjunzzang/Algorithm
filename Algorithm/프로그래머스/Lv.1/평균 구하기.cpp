//
//  main.cpp
//  0519
//
//  Created by 김상준 on 5/19/24.
//
#include <string>
#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for ( int i=0;i<arr.size();i++) {
        answer += arr[i];
    }
    answer = answer / arr.size();

    return answer;
}
