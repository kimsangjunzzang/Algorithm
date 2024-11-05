#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr [4][4];
    int cnt =0;

    for ( int i=0; i<4; i++) {
        for ( int j =0; j<4;j++) {
            int num; cin >> num;
            arr[i][j] = num;
        }
    }

    for ( int i =0;i<4;i++) {
        for ( int j=0;j<4;j++) {
            if(j<=i)cnt +=arr[i][j];
        }
    }
    cout << cnt;
    return 0;
}