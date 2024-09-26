//
//  main.cpp
//  알고리즘
//
//  Created by 김상준 on 8/7/24.
//
#include<iostream>
using namespace std;

int N;
int a[120];
int prime[120];
string ans[120];

void solve(int i){
    for (int j = 2; j < 120; j++){
        for (int k = 2; k < 120; k++){
            if (j + k != a[i]) continue;
            if (!prime[j] && !prime[k]){
                ans[i] = "Yes";
                return;
            }
        }
    }
    ans[i] = "No";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];

    for (int i = 2; i < 120; i++){
        int j = i;
        while (i*j<120){
            prime[i * j] = 1;
            j++;
        }
    }

    for (int i = 0; i < N; i++)
        solve(i);

    for (int i = 0; i < N; i++)
        cout << ans[i] << "\n";
}
