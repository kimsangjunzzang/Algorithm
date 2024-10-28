#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    int h = 0;
    int jj = 1;
    for ( int i=1;i<=num*2;i++) {

        // 홀수 일때.
        if(i % 2 == 1) {
            for ( int j =0;j<num-h;j++) {
                cout << "* ";
            }
            h++;
        } else {
            for ( int j =0;j<jj;j++) {
                cout << "* ";
            }
            jj++;
        }
        cout << endl;
    }
    return 0;
}