#include <iostream>

using namespace std;

// 해당 숫자가 소수인지 여부를 반환하는 함수를 작성합니다.
bool IsPrime(int n) {
    if(n == 1)
        return false;
    
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return false;
    }
    
    return true;
}

// 자릿수의 합이 짝수인지 여부를 반환하는 함수를 작성합니다.
bool IsDigitSumEven(int n) {
    int digit_sum = (n / 100) + ((n / 10) % 10) + (n % 10);
    if(digit_sum % 2 == 0) return true;
    
    return false;
}

// 해당 숫자가 소수이면서 자릿수의 합이 짝수인지 여부를 반환하는 함수를 작성합니다.
bool JudgeNum(int n) {
    if(IsPrime(n) && IsDigitSumEven(n)) return true;
    
    return false;
}

int main() {
    // 변수 선언 및 입력:
    int a, b; cin >> a >> b;

    int cnt = 0;

    for(int i = a; i <= b; i++) {
        if(JudgeNum(i)) cnt++;
    }

    cout << cnt;

    return 0;
}