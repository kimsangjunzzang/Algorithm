#include <iostream>
using namespace std;

int main() {
    int n;  cin >> n;
    
    // 첫 번째 줄에 n개의 별을 출력
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    
    // 두 번째 줄 이후부터 교차 패턴 출력
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            cout << "*" << endl;
        } else {
            for (int j = 0; j < n - 1; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (i % 2 != 0) {
            cout << "*" << endl;
        } else {
            for (int j = 0; j < n - 1; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    
    return 0;
}