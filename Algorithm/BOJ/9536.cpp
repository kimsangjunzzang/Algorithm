//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        
        string buffer; //버퍼 제거
        getline(cin, buffer);
        
        string origin; //울음소리 기록
        getline(cin, origin);
        
        map<string, bool> m;
        
        while (1) {
            string a, b, c;
            cin >> a >> b >> c; //c가 울음소리
            if (a == "what") {
                cin >> b >> c; //fox say? 까지 입력을 받는다.
                break;
            }
            m[c] = true; //울음소리 기록
        }

        string res = "";
        
        for (int i = 0; i < origin.size(); i++) {
            if (origin[i] == ' ') {
                if (!m[res]){
                    cout << res << " ";
                }
                res = "";
            }
            else
                res += origin[i];
        }
        if (!m[res]) //울음소리의 마지막도 확인한다.
            cout << res << " ";
        cout << "\n";
    }
}
