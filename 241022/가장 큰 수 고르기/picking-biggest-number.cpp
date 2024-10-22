#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int max = 0;
    for ( int i=0;i<10;i++) {
        int num; cin >> num;
        if(num > max) max = num; 
    }
    cout << max;
    return 0;
}