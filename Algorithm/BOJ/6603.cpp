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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(1){
        int k; cin >> k;
        if(k == 0) break;

        vector<int> v(k);
        
        for(int i = 0; i < k; i++)
            cin >> v[i];

        vector<bool> lotto(k, true);

        // nCr 구현
        // true가 false 뒤에 와야함
        for(int i = 0; i < 6; i++)
            lotto[i] = false;
        
        do{
            for(int i = 0; i < v.size(); i++){
                if(!lotto[i]) cout << v[i] << ' ';
            }
            cout << '\n';
        }while(next_permutation(lotto.begin(), lotto.end()));
            
        cout << '\n';
    }
}
