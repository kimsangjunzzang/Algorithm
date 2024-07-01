//
//  main.cpp
//  1246
//
//  Created by 김상준 on 7/1/24.
//

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int num;
    cin>>num;
    queue<int> q;
    for(int i=1;i<=num;i++){
        q.push(i);
    }
    while(q.size() != 1) {
        cout<<q.front()<<" ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<q.front()<<endl;
    
}
