#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num1,num2; cin >> num1 >> num2;
    int sum = 0;
    vector<int>v(1000);

    while(1) {
        if(num1 <= 1) {
            break;
        } 
        else {
            v[num1 % num2]++;
            num1 /= num2;
        }

    }
    for ( int i=0;i<v.size();i++) {
        sum += v[i] * v[i];
    }
    cout << sum<<endl;

    return 0;
}