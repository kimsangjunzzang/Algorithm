//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input,result;
    string a, b;
    cin >> input;

    result = "{";

    for (int i = 0; i < input.size()-2; i++) {
        for (int j = i+1; j < input.size()-1; j++) {
            
            string val;

            for (int u = i; u >= 0; u--)
                val += input[u];

            for (int u = j; u > i; u--)
                val += input[u];

            for (int u = input.size() - 1; u > j; u--)
                val += input[u];

            if (result > val) result = val;
            
        }
        
    }
    cout << result << endl;
}