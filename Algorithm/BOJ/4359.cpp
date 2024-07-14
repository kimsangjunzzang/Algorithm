//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    float cnt = 0;
    map<string, float> m;
   
    while (getline(cin, str)) {
        cnt++;
        
        if (m.find(str) != m.end()) {
            m[str] += 1;
        }
        else
            m[str] = 1;
    }
    
    cout << fixed;
    cout.precision(4);
    
    for (auto it = m.begin(); it != m.end(); it++) {
        float val = (it->second / cnt) * 100;
        cout << it->first << " ";
        cout << val << endl;
    }
    return 0;
}
