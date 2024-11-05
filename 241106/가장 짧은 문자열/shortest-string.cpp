#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;
    string str3;
    cin >> str1 >>str2 >>str3;

    int str1_size = str1.size();
    int str2_size = str2.size();
    int str3_size = str3.size();
    
    vector<int> v(3);

    v[0] =str1_size;
    v[1] = str2_size;
    v[2] = str3_size;

    sort(v.begin(),v.end());
    cout << v[2]-v[0]<<endl;
    return 0;
}