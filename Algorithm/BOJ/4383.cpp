//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#define endl '\n'
using namespace std;

//백준 4383번 코드
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);

    while (1) {
        int n;
        cin >> n;

        int arr[3000];    //입력값
        if (cin.eof() == 1) { break; }
        else if (n == 1) {
            int a;
            cin >> a;
            cout << "Jolly" << endl;
        }
        else {
            int cnt[3000] = { 0 };
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
                if (i == 0) { continue; }
                int num = arr[i] - arr[i - 1];
                if (num > 0) { cnt[num]++; }
                else { cnt[num * (-1)]++; }
            }
            for (int i = 1; i < n; i++) {
                if (cnt[i] == 0) { cout << "Not jolly" << endl; break; }
                if (i == n - 1) { cout << "Jolly" << endl; }
            }
        }
    }
}
