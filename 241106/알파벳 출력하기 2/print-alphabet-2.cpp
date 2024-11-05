#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    int cnt = 0;

    for ( int i=1;i<=num;i++) {
        for ( int j=1;j<=num;j++) {
            if(i<=j) {
                cout << char('A'+cnt)<<" ";
                if(cnt==25) {
                    cnt = 0;
                }else {
                cnt++;
                }
            } else {
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}