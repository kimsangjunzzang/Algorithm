//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//

#include<iostream>
using namespace std;

int main(){
    int testCase ;
    cin>> testCase;
    
    for(int i=0;i<testCase;i++){
        int num;
        int numA =0,numB =0,numC =0,numD =0;
        cin>> num;
        while (num!=0) {
            if(num >= 25 ) {
                num -= 25;
                numA++;
            }else if (num >= 10){
                num -= 10;
                numB++;
                
            }else if (num >= 5){
                num -=5;
                numC++;
            }else{
                num -=1;
                numD++;
            }
            
        }
        cout<<numA<<" "<<numB<<" "<<numC<<" "<<numD<<endl;
    }
    
}
