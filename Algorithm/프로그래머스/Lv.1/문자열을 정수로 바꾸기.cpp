//
//  main.cpp
//  0519
//
//  Created by 김상준 on 5/19/24.
//

#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    if(s[0] == '-'){
        for(int i=1;i<s.size();i++){
            if(s[i] == '1'){
                answer += 1*pow(10,s.size()-1-i);
            }
            else if(s[i] == '2'){
                answer += 2*pow(10,s.size()-1-i);
            }
            else if(s[i] == '3'){
                answer += 3*pow(10,s.size()-1-i);
            }
            else if(s[i] == '4'){
                answer += 4*pow(10,s.size()-1-i);
            }
            else if(s[i] == '5'){
                answer += 5*pow(10,s.size()-1-i);
            }
            else if(s[i] == '6'){
                answer += 6*pow(10,s.size()-1-i);
            }
            else if(s[i] == '7'){
                answer += 7*pow(10,s.size()-1-i);
            }
            else if(s[i] == '8'){
                answer += 8*pow(10,s.size()-1-i);
            }
            else if(s[i] == '9'){
                answer += 9*pow(10,s.size()-1-i);
            }

        }
        answer = -answer;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                answer += 1*pow(10,s.size()-1-i);
            }
            else if(s[i] == '2'){
                answer += 2*pow(10,s.size()-1-i);
            }
            else if(s[i] == '3'){
                answer += 3*pow(10,s.size()-1-i);
            }
            else if(s[i] == '4'){
                answer += 4*pow(10,s.size()-1-i);
            }
            else if(s[i] == '5'){
                answer += 5*pow(10,s.size()-1-i);
            }
            else if(s[i] == '6'){
                answer += 6*pow(10,s.size()-1-i);
            }
            else if(s[i] == '7'){
                answer += 7*pow(10,s.size()-1-i);
            }
            else if(s[i] == '8'){
                answer += 8*pow(10,s.size()-1-i);
            }
            else if(s[i] == '9'){
                answer += 9*pow(10,s.size()-1-i);
            }

        }

    }


    return answer;
}
