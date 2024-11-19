#include <iostream>

using namespace std;

// 윤년이 아닐 때 m번째 달의 마지막 날을 반환하는 함수를 작성합니다.
int LastDayNumber(int m) {
    if(m == 2)
        return 28;
    if(m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    
    return 31;
}

// 윤년이 아닐 때 m월 d일이 존재하는지 여부를 확인하는 함수를 작성합니다.
bool JudgeDay(int m, int d) {
    if(m <= 12 && d <= LastDayNumber(m))
        return true;
    
    return false;
}

int main() {
    // 변수 선언 및 입력:
    int m, d;
    cin >> m >> d;
    
    if(JudgeDay(m, d))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}