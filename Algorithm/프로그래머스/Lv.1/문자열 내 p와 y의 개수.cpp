//
//  main.cpp
//  0519
//
//  Created by 김상준 on 5/19/24.
//

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int cntp=0;
    int cnty=0;
    
   for(int i=0;i<s.size();i++){
       if(s[i] == 'p' || s[i] == 'P'){
           cntp++;
       }
       else if(s[i] == 'y' || s[i]=='Y'){
           cnty++;
       }
       
   }
    

    if(cntp != cnty) answer = false;
    
    return answer;
}
