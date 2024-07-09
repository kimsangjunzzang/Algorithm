//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    while( getline(cin, str)){
        int small = 0;
        int big = 0;
        int num = 0;
        int blank = 0;
        
        for(int i=0;i<str.length();i++) {
            if (str[i] >='a'&&str[i]<='z') {
                small++;
            }else if (str[i] >= 'A' && str[i] <= 'Z') {
                big++;
            }else if (str[i] >= '0' && str[i] <= '9') {
                num++;
            }else if (str[i] == ' ') {
                blank++;
            }
        }
        cout<<small<<" "<<big<<" "<<num<<" "<<blank<<endl;
    }
    
}
