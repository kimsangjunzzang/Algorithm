//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    setprecision(7);

    string str, grade;
    double hakjum, score, sum = 0;
    double hakjumSum = 0;
    for (int i=0;i<20;i++) {
        cin>>str>>hakjum>>grade;
        
        if(grade == "A+"){
            score = 4.5;
        }else if (grade == "A0"){
            score = 4.0;
        }else if (grade == "B+"){
            score = 3.5;
        }else if (grade == "B0"){
            score = 3.0;
        }else if (grade == "C+"){
            score = 2.5;
        }else if (grade == "C0"){
            score = 2.0;
        }else if (grade == "D+"){
            score = 1.5;
        }else if (grade == "D0"){
            score = 1.0;
        }else if (grade == "F") {
            score = 0;
        } else {
            continue;
        }
        sum += score * hakjum;
        hakjumSum += hakjum;
        
    }
    cout.precision(7);
    cout << sum / hakjumSum <<endl;
    
}
