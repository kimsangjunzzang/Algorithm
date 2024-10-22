#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v(7);
    v[0] = 0;
    for (int i=0;i<10;i++) {
        int num; cin >> num;
        v[num]++;
    }
    for ( int i=1;i<7;i++) {
        cout<<i<<" - "<<v[i]<<endl;
    }
    return 0;
}