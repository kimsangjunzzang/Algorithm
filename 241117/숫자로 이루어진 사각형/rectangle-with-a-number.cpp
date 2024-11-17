#include <iostream>
using namespace std;

void printF(int num) {
    int cnt =1;
    for( int i=0;i<num;i++) {

        for( int j=0;j<num;j++) {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    printF(num);
    return 0;
}