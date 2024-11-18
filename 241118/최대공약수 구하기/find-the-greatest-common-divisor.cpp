#include <iostream>
using namespace std;

 int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b,a%b);
    
 }

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a >> b;
    cout << gcd(a,b) << endl;
    return 0;
}