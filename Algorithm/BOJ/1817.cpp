//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
using namespace std;
int main(){
    int testCase, M; cin >> testCase >> M;
    int weight=0, ans=0;

    for(int i=0; i<testCase; i++){
        int book; cin >> book;

        if(weight + book > M){
            weight = book;
            ans++;
        } else{
            weight += book;
        }
    }
    if(weight)//마지막 박스에 책이 있으면
        ans++;
    cout << ans << endl;
}
