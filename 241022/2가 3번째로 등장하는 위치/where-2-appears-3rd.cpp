#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v;
    int cnt = 0;
    int testCase; cin >> testCase;
    for ( int i=0;i<testCase;i++) {
        int num; cin >> num;
        if(num == 2) {
            cnt ++;
        }
        if(cnt == 3) {
            cout << i+1 << endl;
            break;
        }
    }
    
    return 0;
}