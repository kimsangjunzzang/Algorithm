#include <iostream>

using namespace std;

// 온전수인지 아닌지 여부를 판단하는 함수를 작성합니다.
bool JudgeNumber(int n) {
    if(n % 2 == 0) return false;
    else if(n % 10 == 5) return false;
    else if(n % 3 == 0 && n % 9 != 0) return false;
    else return true;
}

int main() {
    // 변수 선언 및 입력:
    int a, b; cin >> a >> b;
    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(JudgeNumber(i)) cnt++;
    }

    cout << cnt;

    return 0;
}