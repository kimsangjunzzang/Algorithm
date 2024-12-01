#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int testCase; cin >> testCase;
    vector<int>v(testCase);
    for ( int i=0;i<testCase;i++) {
        cin >> v[i];
    }
    for ( int i=0;i<v.size();i++) {
        if(v[i] % 2 == 0) cout << v[i]/2;
        else cout << v[i];
        cout << " ";
    }
    return 0;
}