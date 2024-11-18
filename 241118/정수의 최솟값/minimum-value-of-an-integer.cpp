#include <iostream>
#include <algorithm>
using namespace std;

void printFunc(int a,int b,int c) {
    int arr[3] = {a,b,c};
    sort(arr,arr+3);
    cout << arr[0];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c; cin >> a >> b >> c;
    printFunc(a,b,c);
    return 0;
}