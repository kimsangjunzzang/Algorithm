//
//  main.cpp
//  zd
//
//  Created by 김상준 on 6/23/24.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[30] = {0};
    
    for(int i=0;i<28;i++){
        int num;
        cin >> num;
        arr[num-1] = num;
        
    }
    
    for(int i=0;i<30;i++){
        if(arr[i] == 0) {
            cout<<i+1<<endl;
        }
    }
}
