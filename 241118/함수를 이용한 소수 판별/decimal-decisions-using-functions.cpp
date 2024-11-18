#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a >> b;
    int sum = 0;
    for ( int i=a;i<=b;i++) {
        int num = 0;
        for ( int j=2;j<i;j++) {
            if(i % j == 0){
                num++;
                break;
            }
        }
        if(num ==0) {
            sum +=i;
        }
    }
    cout << sum << endl;
    return 0;
}