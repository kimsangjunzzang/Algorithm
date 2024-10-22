#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num1, num2; cin >>num1 >>num2;
    vector<int>v(10);

    v[0] = num1;
    v[1] = num2;

    for ( int i=2;i<10;i++) {
        v[i] =  v[i-1] + 2*v[i-2];
    }

    for ( int i=0;i<10;i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}