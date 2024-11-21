#include <iostream>
using namespace std;

// 윤년 여부를 확인하는 함수
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) return true;
            return false;
        }
        return true;
    }
    return false;
}

// 날짜 유효성을 확인하는 함수
bool isValidDate(int year, int month, int day) {
    // 각 달의 최대 일수를 저장
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // 윤년일 경우 2월의 일수를 29로 변경
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    
    // 월과 일이 범위를 벗어나지 않는지 확인
    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month - 1]) {
        return false;
    }
    return true;
}

// 계절을 반환하는 함수
string getSeason(int month) {
    if (3 <= month && month <= 5) {
        return "Spring";
    } else if (6 <= month && month <= 8) {
        return "Summer";
    } else if (9 <= month && month <= 11) {
        return "Fall";
    } else {
        return "Winter";
    }
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;
    
    // 날짜 유효성 확인 및 계절 출력
    if (isValidDate(Y, M, D)) {
        cout << getSeason(M) << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}
