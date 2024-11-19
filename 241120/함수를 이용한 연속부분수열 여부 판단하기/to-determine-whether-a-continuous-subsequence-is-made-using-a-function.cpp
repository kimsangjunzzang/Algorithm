#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a >> b;
    string str1;
    string str2;

    for( int i=0;i<a;i++) {
        char c; cin >> c;
        str1 += c;
    }

    for ( int i=0;i<b;i++) {
        char c; cin >> c;
        str2 += c;
    }

    if(str1.find(str2)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}