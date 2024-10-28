#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;

    for ( int i=1;i<=num;i++) {
        for ( int j= num*i;j>0;j=j-i) {
            cout <<j<<" ";
        }
        cout << endl;
    }
    return 0;
}