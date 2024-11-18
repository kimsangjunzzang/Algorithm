#include <iostream>
using namespace std;

void printFunc(int num) {
    if(num % 2 == 0) {
        int sum = 0;
        while (num > 0) {
        sum += num % 10; 
        num /= 10 ; 
    }
    if(sum % 5 == 0) {
        cout << "Yes" <<endl;
    } else {
        cout << "No" <<endl;
    }
    } else {
        cout << "No" <<endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    printFunc(num);
    return 0;
}