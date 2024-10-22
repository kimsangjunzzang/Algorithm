#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int testCase; cin >> testCase;
    vector<int>v(9);

    for (int i=0;i<testCase;i++) {
        int num; cin >> num;
        v[num]++;
    }
    for ( int i=1;i<10;i++) {
        cout << v[i] << endl;
    }

    return 0;
}