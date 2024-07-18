//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie();
    
    int n;
    string s;
    cin >> n >> s;
    double arr[26] = { 0, };
    stack<double> stack;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            stack.push(arr[s[i] - 'A']);
        }
        else if (!stack.empty()) {
            double tmp = stack.top();
            stack.pop();
            if (s[i] == '+') {
                tmp = stack.top() + tmp;
            }
            else if (s[i] == '-') {
                tmp = stack.top() - tmp;
            }
            else if (s[i] == '*') {
                tmp = stack.top() * tmp;
            }
            else if (s[i] == '/') {
                tmp = stack.top() / tmp;
            }
            stack.pop();
            stack.push(tmp);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << stack.top() << "\n";

    return 0;
}
