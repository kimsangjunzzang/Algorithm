#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    int cnt = 9;

    for ( int i=0;i<num;i++) {
        
        for( int j=0;j<num;j++) {
            cout << cnt;
            cnt--;
            if(cnt ==0) cnt = 9;
        }
        cout << endl;
    }
    return 0;
}