//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
using namespace std;

int main() {
    int mon, day; cin >> mon >> day;

    // 각 달의 일수를 저장 (1월부터 12월까지)
    int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 입력받은 월과 일을 기준으로 1월 1일로부터 며칠째인지 계산
    int totalDays = 0;
    
    // 이전 달까지의 일수를 모두 더함
    for (int i = 0; i < mon - 1; i++) {
        totalDays += daysInMonth[i];
    }
    
    // 현재 달의 일을 더함
    totalDays += day;

    // 1월 1일이 월요일이므로, 7로 나눈 나머지에 따라 요일 결정
    string daysOfWeek[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    // totalDays를 7로 나눈 나머지로 요일 계산
    cout << daysOfWeek[totalDays % 7] << endl;
}
