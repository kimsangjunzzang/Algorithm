//
//  main.cpp
//  ex
//
//  Created by 김상준 on 5/18/24.
//

#include<iostream>
#include<vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, S;
    cin >> N;
    vector<int> v(N,0);
    for (int i = 0; i < N; ++i) cin >> v[i];
    cin >> S;
    for (int i = 0; i < N; i++)
    {
        int max = v[i];
        int maxi = i;
        for (int j = i + 1; j < N; j++)
        {
            if (S - (j - i) >= 0)
            {
                if (max < v[j])
                {
                    max = v[j];
                    maxi = j;
                }
            }
        }
        for (int j = maxi; j > i; j--)
            swap(v[j], v[j - 1]);
        S -= (maxi - i);
        if (S <= 0)
            break;
    }
    for (int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
    return 0;
}

/* 11509
 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;

 int main(){
     int N;
     cin >> N;
     vector<int> v(N);
     for(int i = 0; i < N; i++) cin >> v[i];

     vector<int> top; // 화살의 현재 상태를 저장할 벡터
     top.push_back(v[0]); // 첫번째 풍선에 따른 H 저장

     // 두번째 풍선부터 탐색
     for(int i = 1; i < v.size(); i++){
         bool success = false;
         for(int j = 0; j < top.size(); j++){
             // 기존에 화살 - 1과 풍선(첫번째 풍선의 높이를 저장해줘서 -1 해줘야함)
             if(top[j] - 1 == v[i]){
                 success = true;
                 top[j]--; // 현재 풍선의 높이 저장
                 // 탈출
                 break;
             }
         }
         // 기존에 화살 리스트에서 못찾았을 경우 추가해줌
         if(!success) top.push_back(v[i]);
     }
     cout << top.size(); // 화살 벡터의 개수가 답
 }
 */
