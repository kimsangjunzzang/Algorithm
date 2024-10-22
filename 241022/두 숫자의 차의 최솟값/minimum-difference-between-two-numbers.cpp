#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int testCase; cin >> testCase;
    vector<int> v(testCase);
    for ( int i=0;i<testCase;i++) {
        cin >> v[i];
    }
    int min = 100;
    for ( int i=0;i<v.size()-1;i++) {
        for ( int j= i +1;j<v.size();j++){ 
            if(v[j]-v[i] < min) min = v[j]-v[i];
        }
    }
    cout << min << endl;
    
    return 0;
}