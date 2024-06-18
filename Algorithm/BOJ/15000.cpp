//
//  main.cpp
//  boj
//
//  Created by 김상준 on 6/19/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    
    for(int i=0;i<str.size();i++){
        str[i] = toupper(str[i]);
    }
    cout<<str<<endl;
    
    
}
