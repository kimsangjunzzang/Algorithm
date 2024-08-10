//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <map>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    map<long long, int> card;
    
    for(int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        card[temp]++;
    }
    
    map<long long, int>::iterator it = card.begin();
    long long min = LONG_LONG_MAX;
    int max = 0;
    
    while(it != card.end()) {
        if(it->second > max) {
            max = it->second;
        }
        it++;
    }

    it = card.begin();
    while(it != card.end()) {
        if(max == it->second) {
            min = it->first < min ? it->first : min;
        }
        it++;
    }
    cout << min << endl;
    return 0;
}
