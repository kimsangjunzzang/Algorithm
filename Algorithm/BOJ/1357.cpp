//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int x, y, sum;
    string a,b; cin >> a >> b;
    string res;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    x = stoi(a);
    y = stoi(b);

    sum = x + y;
    res = to_string(sum);
    reverse(res.begin(), res.end());

    cout << stoi(res);
}
