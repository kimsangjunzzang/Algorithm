#include <iostream>
using namespace std;
 
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
 
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
 
int main() {
    int testCase;
    cin>>testCase;
    
    int m, n, x, y;
    
    
    for (int i = 0; i < testCase; i++) {
        cin>>m>>n>>x>>y;
        
        int limit = lcm(m, n);
        int j;
        
        for (j = x; j <= limit; j += m) {
            int temp = (j%n == 0) ? n : j % n;
            if (temp == y) {
                cout<<j<<"\n";
                break;
            }
        }
        if (j > limit)
            cout<<"-1"<<"\n";
            
    }
    return 0;
}
