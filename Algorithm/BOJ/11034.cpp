//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    
    while(cin>>a>>b>>c){
        if(b-a > c-b ){
            cout<<b-a-1;
        }else{
            cout<<c-b-1;
        }
        cout<<endl;
    }
}
