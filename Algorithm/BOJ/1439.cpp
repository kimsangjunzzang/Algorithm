//
//  main.cpp
//  5.21
//
//  Created by 김상준 on 5/21/24.
//

#include <iostream>

using namespace std;


int main() {
    string str;
    int result=0;
    
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1])
            result++;
    }
    cout << result / 2<<endl;
}
