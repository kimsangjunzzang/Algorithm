//
//  main.cpp
//  6.24
//
//  Created by 김상준 on 6/24/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int testCase, num;
    cin>> testCase;
    vector<int>v(testCase);
    int min,max;
    int cnt = 0;
    
    for(int i=0;i<testCase; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    cin>>num;
    
    for(int i=0;i<v.size();i++){
       if (v[i] > num) {
           min = v[i-1];
           max = v[i];
            break;
        }}
    
    for(int i= min+1;i<max;i++){
        for(int j = i+1;j<max;j++){
            if(i<= num && j >=num){
                cnt++;
                
            }
            
        }
    }
    cout<<cnt<<endl;
    
}
