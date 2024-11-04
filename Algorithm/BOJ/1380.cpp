//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCase = 0;
    while(true){
        testCase++;
        int n; cin >> n;

        if(n==0) break;

        string sArr[101];
        cin.ignore();
        for(int i = 1 ; i <=  n ; i ++){
            string student;
            getline(cin, student);
            sArr[i] = student;
        }

        bool bArr[101] = {false, };
        for(int i = 0 ; i < 2*n-1 ; i++){
            int studentNum;
            char flag;
            cin >> studentNum >> flag;
            if(bArr[studentNum]) bArr[studentNum]= false;
            else  bArr[studentNum]= true;
        }

        for(int i = 1 ; i <= n ; i++){
            if(bArr[i]) cout <<testCase << " "<< sArr[i]<< endl;
        }

    }
}
