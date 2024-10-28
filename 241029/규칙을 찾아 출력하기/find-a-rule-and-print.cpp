#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num; cin >> num;

    if (num == 1) {
        cout << "*";
    } else if (num == 2) {
        cout << "* *"<<endl;
        cout << "* *"<<endl;
    } else {

    for ( int i=0;i<num;i++) {
        cout << "* ";
    }
    cout << endl;

    for ( int i=0;i<num-2;i++) {
        for ( int j=0;j<=num;j++) {
            if(j <= i ) {
                cout << "* ";
            }
            else if(j==num) cout <<"*";
            else {
                cout<<" ";
            }
        }
        cout << endl;
    }
     for ( int i=0;i< num;i++) {
        cout << "* ";
    }
    }


    return 0;
}