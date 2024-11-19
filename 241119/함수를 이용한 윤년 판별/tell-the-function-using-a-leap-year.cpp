#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int year; cin >> year;

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 != 0) cout << "false" << endl;
            return 0;
        } 
        cout << "true" << endl;
    } else {
        cout << "false" << emdl;
    }
    
    return 0;
}