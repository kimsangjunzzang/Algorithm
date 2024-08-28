//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// 문자열 변경 함수
void change(vector<char>& arr, int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (arr[i] == 'Z') {
            arr[i] = 'A';
        } else {
            arr[i]++;
        }
    }
}

// 알파벳 묶음을 계산하는 함수
int check(const vector<char>& arr, int start, int end) {
    int count = 0;
    char c = ' ';
    
    for (int i = start; i <= end; ++i) {
        char now = arr[i];
        if (c != now) {
            c = now;
            count++;
        }
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;
    cin.ignore(); // Ignore newline character after integer input

    string str;
    getline(cin, str); // Read the whole line for the string
    vector<char> arr(str.begin(), str.end()); // Convert string to vector<char>

    ostringstream output;
    
    while (t-- > 0) {
        int c, l, r;
        cin >> c >> l >> r;
        cin.ignore(); // Ignore newline character after integer input

        l--; // Convert to 0-based index
        r--; // Convert to 0-based index
        
        if (c == 1) {
            int result = check(arr, l, r);
            output << result << '\n';
        } else if (c == 2) {
            change(arr, l, r);
        }
    }
    
    cout << output.str();
    
    return 0;
}
