//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    for( int i=0;i<testCase;i++) {
        int num; cin >> num;
        vector<int>v(num);
        int sum = 0;
        
        for ( int j =0;j<num;j++) {
            cin >> v[j];
            sum += v[j];
        }
        
        int max = 0; int index= 1; int check = 0;
        
        for(int j =0;j<v.size();j++) {
            if(v[j] > max) {
                max = v[j];
                index = j+1;
            }
        }
        
        for( int j=1;j<v.size();j++) {
            if(v[j-1] != v[j]) {
                check++;
            }
        }
        
        sort(v.begin(), v.end());
        if(v[v.size()-1] == v[v.size()-2]){
            cout << "no winner" <<endl;
        }
        else{
        if(check == 0 ) {
            cout << "no winner" <<endl;
        }
        else{
            
            if (max > sum / 2){
                cout << "majority winner "<<index<<endl;
            } else {
                cout << "minority winner "<<index<<endl;
            }
        }
    }
        
    }
}
