//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {

    while(1) {
        string str;
        getline(cin,str);
        if(str == "#") return 0;
        int cnt = 0;
        for ( int i=0;i<str.size();i++) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
