#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printFunction(int a, int b) {
    vector<int>v;
    for ( int i = a; i<=b;i++) {
        if(i % 3 == 0) v.push_back(i);
        else {
            string str = to_string(i);
            
            if (str.find('3') != string::npos || str.find('6') != string::npos || str.find('9') != string::npos) {
               
                v.push_back(i);
            }
        }
    }
    cout << v.size() << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; cin >> a >> b;
    printFunction(a,b);
    return 0;
}


