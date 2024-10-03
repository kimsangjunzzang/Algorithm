//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// nums : 숫자들이 들어 있는 배열
// 서로 다른 3개를 골라 더했을 때 소수가 되는 경우 개수 리턴

// 소수 판별 함수
bool isPrime(int num){
    if(num ==0 || num == 1) return false;
    for(int i=2; i<num; i++){
        if(num%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                
                int n = nums[i] + nums[j] + nums[k];
                
                if(isPrime(n)==true){
                    answer++;
                }
            }
        }
    }
    
    return answer;
}
