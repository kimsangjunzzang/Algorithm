#include <iostream>
using namespace std;
 
int main() {
    int TestCase, n;
    cin >> TestCase;
 
    while (TestCase--) {
        cin >> n;
        
        int digit = 0;
        
        while (n > 0) {
            if (n % 2 == 1) {
                cout << digit << " ";
            }
            
            n =n/2;
            digit++;
        }
    }
}
