#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int>v(10);

    for ( int i=0;i<10;i++) {
        string str; cin >> str;
        int num;

        if(str.length() == 2) {
            num = str[0]-48;
            v[num]++;
        } else {
            num = 0;
            v[num]++;
        }
    }
    for ( int i=1;i<10;i++) {
        cout << i <<" - "<<v[i]<<endl;
    }

    return 0;
}