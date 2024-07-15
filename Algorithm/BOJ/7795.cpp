//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 7/4/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int testCase;
    cin>> testCase;
    
    for(int i=0;i<testCase;i++) {
        int N,M;
        cin>> N >> M;
        
        vector<int>A(N);
        vector<int>B(M);
        
        int cnt =0;
        
        for(int a=0;a<N;a++) {
            cin>>A[a];
        }
        
        for(int b=0;b<M;b++) {
            cin>>B[b];
        }
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        for(int x=0;x<N;x++) {
            for(int y =0;y<M;y++) {
                if(A[x] > B[y]) cnt++;
                else break;
            }
        }
        cout<<cnt<<"\n";
        
    }
    return 0;
}
