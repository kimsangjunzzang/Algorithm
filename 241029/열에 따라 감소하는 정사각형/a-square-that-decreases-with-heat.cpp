#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;

    for ( int i=num;i>0;i--) {
        for ( int j=num;j>=1;j--) {
            cout << j<<" ";
        }
        cout <<endl;
    }
    return 0;
}