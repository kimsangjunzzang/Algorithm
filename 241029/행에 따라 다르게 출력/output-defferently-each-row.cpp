#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    int cnt = 1;

    for ( int i=1;i<=num;i++) {
        if(i % 2 == 1) {
            for ( int j = 0;j<num; j++) {
                cout << cnt<<" ";
                cnt++;
            }
            cnt ++;
           
        } else {
            for ( int j=0;j<num;j++) {
                cout << cnt << " ";
                cnt += 2;
            }
            cnt--;
        }
        cout << endl;
    }
    return 0;
}