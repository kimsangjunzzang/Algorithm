//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//
#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n ;
    cin>>n;
    
    int arr [11]={};
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    
    for(int i =1;i<9;i++){
        arr[i+3] =arr[i+2] + arr[i+1] + arr[i];
    }
    
    
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        cout<< arr[num]<<endl;
    }
    
    return 0;
}
