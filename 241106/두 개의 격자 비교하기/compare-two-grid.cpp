#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m; cin >> n >> m;
    int arr[n][m];

    for ( int i=0;i<n;i++) {
        for ( int j=0;j<m;j++) {
            int num; cin >> num;
            arr[i][j] = num;
        }
    }

    for ( int i=0;i<n;i++) {
        for ( int j=0;j<m;j++) {
            int num; cin >> num;
            if(arr[i][j]==num) arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    for ( int i=0;i<n;i++) {
        for ( int j=0;j<m;j++) {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}