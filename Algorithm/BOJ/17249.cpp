//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string n;cin >> n;
    int left = 0;
    int right = 0;
    int turn = 0;
    

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '@' && turn == 0) {
            left++;
        }
        if (n[i] == '@' && turn == 1) {
            right++;
        }
        if (n[i] == '0')
            turn = 1;
    }
    cout << left << " " << right;

    return 0;
}
