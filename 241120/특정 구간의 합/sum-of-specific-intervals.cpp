#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m; cin >> n >> m;
    vector<int>v;

    for ( int i=0;i<n;i++) {
        int num; cin >> num;
        v.push_back(num);
    }

    for ( int i=0;i<m;i++) {
        int a,b; cin >> a >> b;
        int sum = 0;

        for( int j = a-1; j<b; j++) {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}