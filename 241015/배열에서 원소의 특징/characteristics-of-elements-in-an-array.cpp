#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int>v(10);
    for ( int i=0;i<10;i++) {
        cin >> v[i];
    }
    for (int i=0;i<v.size();i++) {
        if(v[i] % 3 == 0) {
            cout << v[i-1]; 
            break;
        }
    }
    return 0;
}