#include <iostream>
using namespace std;

void printFunc(int row,int col){
    for(int i=0;i<row;i++){
        for ( int j=0;j<col;j++){
            cout <<1;
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int row,col; cin >> row >> col;
    printFunc(row,col);
    return 0;
}