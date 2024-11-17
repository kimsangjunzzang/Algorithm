#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;
    int arr[num][num]={};

    for ( int i=0;i<num;i++) {
        if(i==0) arr[i][0] = 1;
        else {
        arr[i][0]= arr[i-1][0] +1;
        }
        for ( int j=0;j<num;j++) {
             arr[i][j] = arr[i][0]+ (num*j);
             }
    }

    for ( int i=0;i<num;i++) {
        for ( int j=0;j<num;j++) {
              cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}