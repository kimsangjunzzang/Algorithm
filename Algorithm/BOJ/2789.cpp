//
//  main.cpp
//  zd
//
//  Created by 김상준 on 6/23/24.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b = "CAMBRIDGE";
    cin >> a;
    
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i] == b[j]) a[i]=0;
        }
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i]!=0) cout << a[i];
    }
}
