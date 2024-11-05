#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int testCase; cin >> testCase;
   

    for ( int i=0;i<testCase;i++) {
         int res = 0;
        int a,b; cin >> a >> b;
        for ( int i=a;i<=b;i++) {
            if(i%2 == 0) res +=i;
        }
        cout << res <<endl;
    }
    return 0;
}