//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string word, compare; cin >> word;
    
    int n, cnt = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> compare;
        compare += compare;
        
        int len= compare.length();
        int word_len = word.length();
        for (int j = 0; j < len - word_len + 1; j++) {
            if (word == compare.substr(j, word_len)) {
                cnt++;
                break;
            }
        }
    }
    
    cout << cnt;
    
}
