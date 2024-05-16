//
//  main.cpp
//  18110
//
//  Created by 김상준 on 5/16/24.
//

#include<iostream>
#include "cmath"
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int num,k = 0;
    cin>>num;
    if (num == 0)
        {
            cout << 0;
            return 0;
        }
    
    int minus = round(num * 0.15);
    
    vector<int>arr;
    
    for(int i=0;i<num;i++){
        cin>>k;
        arr.push_back(k);
    }
    
    sort(arr.begin(), arr.end());
    
//    for(int i=0;i<minus;i++){
//        arr.erase(arr.begin()+i-2);
//        arr.erase(arr.end()-1-i);
//    }

    double sum =0;
    
    for(int i=minus;i<num-minus;i++){
        sum += arr[i];
    }
    cout<< round(sum/(num-minus*2))<<endl;
    return 0;
}
