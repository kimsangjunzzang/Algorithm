//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <string>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    int len, i;

    cin >> s; len = s.length();
    for (i = 1; i < len; i++)
    {
        if (s[i - 1] == s[i]) //평지
        {
            cout << "NON ALPSOO";
            return 0;
        }
    }

    for (i = 2; i < len; i++)
    {
        int x = s[i - 1] - s[i - 2], y = s[i] - s[i - 1];
        if (x * y > 0 && x != y) //x,y가 같은 부호 (양,음)를 가지고 있는데 값이 다른경우
        {
            cout << "NON ALPSOO";
            return 0;
        }
    }

    if (s[1] - s[0] < 0 || s[len - 1] - s[len - 2]>0) //시작할때 감소 or 끝날때 증가
    {
        cout << "NON ALPSOO";
        return 0;
    }

    cout << "ALPSOO";
}
