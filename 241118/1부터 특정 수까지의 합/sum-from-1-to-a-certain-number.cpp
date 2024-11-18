#include <iostream>
using namespace std;

int printF(int num) {
    long long sum = 0;
    for ( int i=1;i<=num;i++) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    cout <<printF(num) << endl;
    return 0;
}