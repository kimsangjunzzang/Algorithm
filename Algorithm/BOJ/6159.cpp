//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int costumeParty(int s, vector<int>& cows) {
    sort(cows.begin(), cows.end());
    int cnt = 0;
    int left = 0;
    int right = cows.size() - 1;

    while (left < right) {
        if (cows[left] + cows[right] <= s) {
            cnt += right - left;
            left++;
        } else {
            right--;
        }
    }
    return cnt;
}

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> cows(n);
    for (int i = 0; i < n; ++i) {
        cin >> cows[i];
    }

    int cnt = costumeParty(s, cows);
    cout << cnt << endl;
    return 0;
}
